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
    '(chezscheme
       chibi
       chicken
       cyclone
       gambit
       foment
       gauche
       ;gerbil
       guile
       ;husk
       ikarus
       ironscheme
       kawa
       larceny
       loko
       ;meevax
       mit-scheme
       mosh
       racket
       ;picrin
       ;scheme-rs
       ;stak
       sagittarius
       skint
       stklos
       tr7
       ;vicare
       ypsilon))
  (exit 0))

(define scheme (if (get-environment-variable "COMPILE_R7RS")
                  (string->symbol (get-environment-variable "COMPILE_R7RS"))
                  #f))
(when (not scheme) (error "Environment variable COMPILE_R7RS not set."))
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
        (when (or (string-ends-with? item ".scm")
                  (string-ends-with? item ".sps"))
          (set! input-file item)))
      (list-tail (command-line) 1))
    input-file))

(define r6rs?  (if (and input-file
                        (string-ends-with? input-file ".sps"))
                 #t
                 #f))

(define output-file
  (if (member "-o" (command-line))
    (cadr (member "-o" (command-line)))
    (if input-file
      "a.out"
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
  (windows (pffi-define-library c-stdlib '("stdlib.h") "ucrtbase"))
  (else (pffi-define-library c-stdlib
                             '("stdlib.h")
                             "c"
                             '((additional-versions ("6"))))))

(pffi-define c-system c-stdlib 'system 'int '(pointer))

(define search-library-files
  (lambda (directory)
    (let ((result (list)))
      (for-each
        (lambda (file)
          (let* ((path (string-append directory "/" file))
                 (info (file-info path #f)))
            (when (and (not r6rs?)
                       (string-ends-with? path ".sld"))
              (set! result (append result (list path))))
            (when (and r6rs?
                       (string-ends-with? path ".sls"))
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
               library-files
               r6rs?)))

(define scheme-library-command
  (lambda (library-file)
    (apply (cdr (assoc 'library-command (cdr (assoc scheme data))))
      (list library-file prepend-directories append-directories r6rs?))))


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
(newline)

; Compile libraries
(cond ((assoc 'library-command (cdr (assoc scheme data)))
       (for-each
         (lambda (file)
           (let* ((library-command (scheme-library-command file)))
             (display "Compiling library ")
             (display file)
             (newline)
             (display "With command      ")
             (display library-command)
             (newline)
             (display "Exit code         ")
             (let ((output (c-system (pffi-string->pointer library-command))))
               (when (not (= output 0))
                 (error "Problem compiling libraries, exiting" output))
               (display output))
             (newline)
             (newline)))
         library-files))
      (else
        (display "Implementation has no library build command, skipping library compilation.")
        (newline)))

; Create executable file
(when (and (equal? scheme-type 'interpreter) input-file)
  (when (and output-file (file-exists? output-file))
    (delete-file output-file))
    (display "Creating startup script    ")
    (display output-file)
    (newline)
    (display "Containing command         ")
    (display scheme-command)
    (newline)
    (with-output-to-file
    (if (string=? compilation-target "windows")
      (string-append output-file ".bat")
      output-file)
    (lambda ()
      (cond ((string=? compilation-target "unix")
             (display "#!/bin/sh")
             (newline))
            ((string=? compilation-target "windows")
             (display "@echo off")
             (newline)
             (display "start")))
      (display scheme-command)))
  (cond ((string=? compilation-target "unix")
         (c-system (pffi-string->pointer (string-append "chmod +x " output-file))))))

(when (and (equal? scheme-type 'compiler) input-file)
  (when (and output-file (file-exists? output-file))
    (delete-file output-file))
  (display "Compiling file    ")
  (display input-file)
  (newline)
  (display "With command      ")
  (display scheme-command)
  (newline)
  (display "Exit code         ")
  (display (c-system (pffi-string->pointer scheme-command)))
  (newline))

