(define slash (cond-expand (windows "\\") (else "/")))

(cond-expand
  (windows
    (define-c-library libc
                         '("stdlib.h" "stdio.h" "error.h")
                         "ucrtbase"
                         '()))
  (else
    (define-c-library libc
                         '("stdlib.h" "stdio.h" "dirent.h" "error.h")
                         "c"
                         '((additional-versions ("6"))))))

(define-c-procedure c-perror libc 'perror 'void '(pointer))
(define-c-procedure c-mkdir libc 'mkdir 'int '(pointer int))
(define-c-procedure c-rmdir libc 'rmdir 'int '(pointer))
(define-c-procedure c-stat libc 'stat 'int '(pointer pointer))
(define-c-procedure c-opendir libc 'opendir 'pointer '(pointer))
(define-c-procedure c-readdir libc 'readdir 'pointer '(pointer))
(define-c-procedure c-closedir libc 'closedir 'int '(pointer))
(define-c-procedure c-realpath libc 'realpath 'pointer '(pointer pointer))

(define-record-type file-info-record
  (file-info-record-make device inode mode nlinks uid gid rdev size blksize blocks atime mtime ctime fname/port follow?)
  file-info?
  (device file-info:device)
  (inode file-info:inode)
  (mode file-info:mode)
  (nlinks file-info:nlinks)
  (uid file-info:uid)
  (gid file-info:gid)
  (rdev file-info:rdev)
  (size file-info:size)
  (blksize file-info:blksize)
  (blocks file-info:blocks)
  (atime file-info:atime)
  (mtime file-info:mtime)
  (ctime file-info:ctime)
  (fname/port file-info:fname/port)
  (follow? file-info:follow?))

; FIX make the "follow?" argument work
(define file-info
  (lambda (fname/port follow?)
    (when (port? fname/port)
      (error "file-info implementation does not support ports as arguments"))
    (let* ((fname-pointer (string->c-utf8 fname/port))
           (stat-pointer (make-c-bytevector 256))
           (result (c-stat fname-pointer stat-pointer))
           (error-message "file-info error")
           (error-pointer (string->c-utf8 error-message)))
      (when (< result 0)
        (c-perror error-pointer)
        (c-free fname-pointer)
        (c-free stat-pointer)
        (c-free error-pointer)
        (error error-message fname/port))
      (file-info-record-make (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 0) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 1) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 2) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 3) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 4) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 5) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 6) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 7) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 8) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 9) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 10) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 11) (native-endianness))
                             (c-bytevector-u64-ref stat-pointer (* (c-type-size 'uint64) 12) (native-endianness))
                             fname/port
                             follow?))))

(define create-directory
  (lambda (fname . permission-bits)
    (let* ((fname-pointer (string->c-utf8 fname))
           (mode (if (null? permission-bits)
                   #o775
                   (string->number (string-append "#o"
                                                  (number->string (car permission-bits))))))
           (result (c-mkdir fname-pointer mode))
           (error-message "create-directory error")
           (error-pointer (string->c-utf8 error-message)))
      (c-free fname-pointer)
      (when (< result 0)
        (c-perror error-pointer)
        (c-free error-pointer)
        (error error-message)))))

(define delete-directory
  (lambda (fname)
    (let* ((fname-pointer (string->c-utf8 fname))
           (result (c-rmdir fname-pointer))
           (error-message "delete-directory error")
           (error-pointer (string->c-utf8 error-message)))
      (c-free fname-pointer)
      (when (< result 0)
        (c-perror error-pointer)
        (c-free error-pointer)
        (error error-message)))))

(define pointer-string-read
  (lambda (pointer offset)
    (letrec* ((looper (lambda (c index result)
                        (if (char=? c #\null)
                          (list->string (reverse result))
                          (looper (c-bytevector-char-ref pointer
                                                         (+ offset index))
                                  (+ index 1)
                                  (cons c result))))))
      (looper (c-bytevector-char-ref pointer offset) 1 (list)))))

(define directory-files
  (lambda (dir . dotfiles?)
    (letrec* ((include-dotfiles? (if (null? dotfiles?) #f (car dotfiles?)))
              (path-pointer (string->c-utf8 dir))
              (directory-pointer (c-opendir path-pointer))
              (error-message "directory-files error")
              (error-pointer (string->c-utf8 error-message))
              (name-offset 19) ; struct dirent d_name offset on linux
              (looper (lambda (directory-entity files)
                        (if (c-null? directory-entity)
                          files
                          (let ((name (pointer-string-read directory-entity
                                                           name-offset)))
                            (looper (c-readdir directory-pointer)
                                    (if (or (string=? name ".")
                                            (string=? name ".."))
                                      (if include-dotfiles?
                                        (cons name files)
                                        files)
                                      (cons name files))))))))
      (when (c-null? directory-pointer)
        (c-perror error-pointer)
        ;(c-free error-pointer)
        ;(c-free directory)
        ;(c-free path-pointer)
        (error error-message))
      (let ((files (looper (c-readdir directory-pointer) (list))))
        ;(c-free error-pointer)
        ;(c-free directory-pointer)
        ;(c-free path-pointer)
        (c-closedir directory-pointer)
        files))))

(define real-path
  (lambda (path)
    (let* ((path-pointer (string->c-utf8 path))
           (real-path-pointer (c-realpath path-pointer (make-c-null)))
           (real-path (c-utf8->string real-path-pointer)))
      (c-free path-pointer)
      (c-free real-path-pointer)
      real-path)))

