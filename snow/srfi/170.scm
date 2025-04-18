(pffi-init)

(cond-expand
  (chicken (import (chicken foreign)))
  (else #t))

(define slash (cond-expand (windows "\\") (else "/")))

(cond-expand
  (windows
    (pffi-define-library libc '("stdio.h") "ucrtbase" '()))
  (else
    (pffi-define-library libc
                         '("stdio.h" "error.h")
                         "c"
                         '((additional-versions ("6"))))))

(pffi-define-library libuv
                     '("uv.h")
                     "uv"
                     '((additional-versions ("1" "1.0.0"))))

(cond-expand
  (windows (pffi-define-library libkernel '("windows.h") "kernel32" '()))
  (else #f))

;(pffi-define c-puts libc 'puts 'int '(string))
(pffi-define uv-default-loop libuv 'uv_default_loop 'pointer '())
(pffi-define uv-translate-sys-error libuv 'uv_translate_sys_error 'int '(int))
(pffi-define uv-strerror libuv 'uv_strerror 'pointer '(int))
(pffi-define uv-fs-stat libuv 'uv_fs_stat 'int '(pointer pointer pointer pointer))
(pffi-define uv-fs-mkdir libuv 'uv_fs_mkdir 'int '(pointer pointer pointer int pointer))
(pffi-define uv-fs-rmdir libuv 'uv_fs_rmdir 'int '(pointer pointer pointer pointer))
(pffi-define uv-fs-opendir libuv 'uv_fs_opendir 'int '(pointer pointer pointer pointer))
(pffi-define uv-fs-closedir libuv 'uv_fs_closedir 'int '(pointer pointer pointer pointer))
(pffi-define uv-fs-scandir libuv 'uv_fs_scandir 'int '(pointer pointer pointer int pointer))
(pffi-define uv-fs-scandir-next libuv 'uv_fs_scandir_next 'int '(pointer pointer))
(pffi-define uv-fs-get-ptr libuv 'uv_fs_get_ptr 'pointer '(pointer))
;(pffi-define uv-fs-scandir libuv 'uv_fs_scandir 'int '(pointer pointer pointer int pointer))
;(pffi-define c-printf libc 'printf 'int '(string))
;(pffi-define c-cos libc 'cos 'double '(double))

(define UV-FS 6)
(define uv-fs-t-make
  (lambda ()
    (let ((p (pffi-pointer-allocate (+ (pffi-size-of 'pointer)     ; .loop
                                       (pffi-size-of 'int)         ; .uv_fs_type
                                       (pffi-size-of 'pointer)     ; .path
                                       (pffi-size-of 'int)         ; .result
                                       (pffi-size-of 'pointer)     ; .statbuf
                                       (pffi-size-of 'pointer)     ; .ptr
                                       512 ; Temporary fix
                                       ))))
      (pffi-pointer-set! p 'int (pffi-size-of 'pointer) UV-FS)
      p)))

(define handle-errors
  (lambda (return-code . irritants)
    (when (< return-code 0)
      (if (null? irritants)
        (raise-continuable (pffi-pointer->string (uv-strerror (uv-translate-sys-error return-code))))
        (raise-continuable (pffi-pointer->string (uv-strerror (uv-translate-sys-error return-code))))))
    return-code))


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
    (let* ((req-type (uv-fs-t-make)))
      (handle-errors (uv-fs-stat (uv-default-loop)
                                 req-type
                                 (pffi-string->pointer fname/port)
                                 (pffi-pointer-null)))
      (let ((stat-pointer (uv-fs-get-ptr req-type)))
        (file-info-record-make (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 0))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 1))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 2))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 3))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 4))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 5))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 6))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 7))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 8))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 9))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 10))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 11))
                               (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 12))
                               fname/port
                               follow?)))))

(define file-info-directory?
  (lambda (file-info)
    ; Try to open the file-info path as directory, if it fails say it's not a directory
    (let ((req-type (uv-fs-t-make)))
      (let* ((file-path (file-info:fname/port file-info))
             (result (uv-fs-opendir (uv-default-loop)
                                    req-type
                                    (pffi-string->pointer file-path)
                                    (pffi-pointer-null))))
        (cond ((not (file-exists? file-path)) #f)
              ((not (= result -20)) #t)
              ; If it is a dir then it's open and needs to be closed
              (else (uv-fs-closedir (uv-default-loop)
                                    req-type
                                    (uv-fs-get-ptr req-type)
                                    (pffi-pointer-null))
                    #f))))))

(define create-directory
  (lambda (fname . permission-bits)
    (let ((req-type (uv-fs-t-make))
          (mode (if (null? permission-bits) #o775 (car permission-bits))))
      (handle-errors (uv-fs-mkdir (uv-default-loop)
                                  req-type
                                  (pffi-string->pointer fname)
                                  mode
                                  (pffi-pointer-null))
                     fname))))

(define delete-directory
  (lambda (fname)
    (let ((req-type (uv-fs-t-make)))
      (handle-errors
        (uv-fs-rmdir (uv-default-loop)
                     req-type
                     (pffi-string->pointer fname)
                     (pffi-pointer-null))
        fname))))

(define directory-files
  (lambda (dir . args)
    (letrec* ((dotfiles? (if (null? args) #f (car args)))
              (req-type (uv-fs-t-make))
              (result (handle-errors (uv-fs-scandir (uv-default-loop)
                                                    req-type
                                                    (pffi-string->pointer dir)
                                                    0
                                                    (pffi-pointer-null))
                                     dir))
              (uv-dirent-t (pffi-pointer-allocate (+ (pffi-size-of 'pointer)
                                                     (pffi-size-of 'int)
                                                     512)))
              (files (list))
              (looper
                (lambda ()
                  (let ((next-file (uv-fs-scandir-next req-type uv-dirent-t)))
                    (when (= next-file 0) ; End of file
                      (let ((file-name (string-copy (pffi-pointer->string (pffi-pointer-get uv-dirent-t 'pointer 0)))))
                        (if (and (> (string-length file-name) 0)
                                 (char=? (string-ref file-name 0) #\.))
                          (if dotfiles? (set! files (append files (list file-name))))
                          (set! files (append files (list file-name)))
                          )
                        (looper)))))))
      (looper)
      files
      ;(write result)
      ;(newline)
      ;(write (uv-fs-scandir-next req-type uv-dirent-t))
      ;(newline)
      ;(write (pffi-pointer->string (pffi-pointer-get uv-dirent-t 'pointer 0)))
      ;(newline)






      ;(write (uv-default-loop))
      ;(newline)
      ;(write (uv-fs-scandir (uv-default-loop) (pffi-string->pointer ".") 0 (pffi-pointer-null)))
      ;(newline)
      ;(write (c-opendir (pffi-string->pointer ".")))
      ;(newline)
      ;(c-puts (pffi-string->pointer "Hello world"))
      ;(c-printf (pffi-string->pointer "Hello world\n"))
      ;(newline)
      ;(c-cos 5.5)
      ;#t
      )))
