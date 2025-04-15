(import (scheme base)
        (scheme file)
        (scheme read)
        (scheme write)
        (scheme process-context)
        (retropikzel pffi)
        (libs util)
        (libs data)
        (srfi 170))

(when (member "--list-schemes" (command-line))
  (for-each
    (lambda (scheme)
      (display scheme)
      (newline))
    '(chibi
       cyclone
       gauche
       ;guile
       kawa
       loko
       mosh
       sagittarius
       skint
       stklos
       tr7
       ypsilon))
  (exit 0))

(define scheme (if (get-environment-variable "SCHEME")
                  (string->symbol (get-environment-variable "SCHEME"))
                  #f))
(when (not scheme) (error "Environment variable SCHEME not set."))
(when (not (assoc scheme data))
  (error "Unsupported implementation" scheme))
(define compilation-target (if (get-environment-variable "TARGET")
                             (get-environment-variable "TARGET")
                             (cond-expand (windows "windows")
                                          (else "unix"))))

(define input-file
  (let ((input-file #f))
    (for-each
      (lambda (item)
        (when (and (> (string-length item) 4)
                   (string=? ".scm" (string-copy item
                                                 (- (string-length item) 4)
                                                 (string-length item))))
          (set! input-file item)))
      (list-tail (command-line) 1))
    input-file))

(define output-file
  (if (member "-o" (command-line))
    (cadr (member "-o" (command-line)))
    (if input-file
      (string-copy input-file 0 (- (string-length input-file) 4))
      #f)))

(define prepend-directories
  (letrec ((looper (lambda (rest result)
                     (if (null? rest)
                       result
                       (if (string=? (car rest) "-I")
                         (looper (cdr (cdr rest))
                                 (append (list (cadr rest)) result))
                         (looper (cdr rest)
                                 result))))))
    (looper (command-line) (list))))

(define append-directories
  (letrec ((looper (lambda (rest result)
                     (if (null? rest)
                       result
                       (if (string=? (car rest) "-A")
                         (looper (cdr (cdr rest))
                                 (append (list (cadr rest)) result))
                         (looper (cdr rest)
                                 result))))))
    (looper (command-line) (list))))

(cond-expand
  (windows (pffi-define-library c-libstd '("libstd.h") "ucrtbase"))
  (else (pffi-define-library c-libstd
                             '("libstd.h")
                             "c"
                             '((additional-versions ("6"))))))

(pffi-define c-system c-libstd 'system 'int '(pointer))

(define search-library-files
  (lambda (directory)
    (let ((result (list)))
      (for-each
        (lambda (file)
          (let* ((path (string-append directory "/" file))
                 (info (file-info path #f)))
            (when (string-ends-with? path ".sld")
              (set! result (append result (list path))))
            (if (file-info-directory? info)
              (set! result (append result (search-library-files path))))))
        (directory-files directory))
      result)))

(define library-files
  (apply append
         (map
           (lambda (directory)
             (if (file-exists? directory)
               (search-library-files directory)
               (list)))
           (append prepend-directories append-directories))))

(define scheme-type (cdr (assoc 'type (cdr (assoc scheme data)))))

(define scheme-command
  (apply (cdr (assoc 'command (cdr (assoc scheme data))))
         (list (if input-file input-file "")
               (if output-file output-file "")
               prepend-directories
               append-directories
               library-files)))

(define scheme-library-command
  (lambda (library-file)
    (apply (cdr (assoc 'library-command (cdr (assoc scheme data))))
      (list library-file prepend-directories append-directories))))


(define list-of-features
  (letrec ((looper (lambda (rest result)
                     (if (null? rest)
                       result
                       (if (string=? (car rest) "-D")
                         (looper (cdr (cdr rest))
                                 (append (list (cadr rest)) result))
                         (looper (cdr rest)
                                 result))))))
    (looper (command-line) (list))))

(display "Scheme            ")
(display scheme)
(newline)
(display "Type              ")
(display scheme-type)
(newline)
(display "Command           ")
(display scheme-command)
(newline)
(display "Input file        ")
(display input-file)
(newline)
(display "Output file       ")
(display output-file)
(newline)

; Create executable file
(when (and (equal? scheme-type 'interpreter) input-file)
  (when (and output-file (file-exists? output-file))
    (delete-file output-file))
  (with-output-to-file
    (if (string=? compilation-target "windows")
      (string-append output-file ".bat")
      output-file)
    (lambda ()
      (when (string=? compilation-target "unix")
        (display "#!/bin/sh"))
      (when (string=? compilation-target "windows")
        (display "@echo off"))
      (newline)
      (when (string=? compilation-target "windows")
        (display "start"))
      (display scheme-command))))

(when (and (equal? scheme-type 'compiler) input-file)
  (when (file-exists? output-file) (delete-file output-file))
  (display "Compiling file    ")
  (display input-file)
  (newline)
  (display "With command      ")
  (display scheme-command)
  (newline)
  (c-system (pffi-string->pointer scheme-command)))

; Compile libraries
(cond ((and (not input-file) (assoc 'library-command (cdr (assoc scheme data))))
       (when (and output-file (file-exists? output-file))
         (delete-file output-file))
      (for-each
             (lambda (file)
               (let* ((command (scheme-library-command file)))
                 (display "Compiling library ")
                 (display file)
                 (newline)
                 (display "With command      ")
                 (display command)
                 (newline)
                 (c-system (pffi-string->pointer command))))
             library-files))
      ((not input-file)
       (display "Library compilation requested but no library command found. ")
       (display "Skipping...")
       (newline)))
