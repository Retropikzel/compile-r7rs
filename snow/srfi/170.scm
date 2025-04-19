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
(pffi-define uv-fs-realpath libuv 'uv_fs_realpath 'int '(pointer pointer pointer pointer))
(pffi-define uv-fs-cleanup libuv 'uv_fs_req_cleanup 'void '(pointer))
;(pffi-define uv-fs-scandir libuv 'uv_fs_scandir 'int '(pointer pointer pointer int pointer))
;(pffi-define c-printf libc 'printf 'int '(string))
;(pffi-define c-cos libc 'cos 'double '(double))

(define UV-FS 6)
(pffi-define-struct uv-fs-t-make
                    'uv_fs_t
                    '((pointer . data)
                      (int . type)
                      (pointer . reserved1)
                      (pointer . reserved2)
                      (pointer . reserved3)
                      (pointer . reserved4)
                      (pointer . reserved5)
                      (pointer . reserved6)
                      (pointer . fs_type)
                      (pointer . loop)
                      (pointer . cb)
                      (int . result)
                      (pointer . ptr)
                      (pointer . path)
                      (int . statbuf)
                      (pointer . new_path)
                      (int . file)
                      (int . flags)
                      (int . mode)
                      (pointer . bufs)
                      (int . off)
                      (int . uid)
                      (int . gid)
                      (double . atime)
                      (double . mtime)
                      (pointer . work_req)
                      (pointer . bufsml1)
                      (pointer . bufsml2)
                      (pointer . bufsml3)
                      (pointer . bufsml4)))

(define req-type (uv-fs-t-make))

;(pffi-struct-set! struct 'fs_type UV-FS)
#;(define uv-fs-t-make
  (lambda ()
    (let ((struct (uv-fs-t)))
      (pffi-struct-set! struct 'fs_type UV-FS)
      struct
    #;(let ((p (pffi-pointer-allocate (+ (pffi-size-of 'pointer)     ; .loop
                                       (pffi-size-of 'int)         ; .uv_fs_type
                                       (pffi-size-of 'pointer)     ; .path
                                       (pffi-size-of 'int)         ; .result
                                       (pffi-size-of 'pointer)     ; .statbuf
                                       (pffi-size-of 'pointer)     ; .ptr
                                       512 ; Temporary fix
                                       ))))
      (pffi-pointer-set! p 'int (pffi-size-of 'pointer) UV-FS)
      p))))

(pffi-define-struct uv-dirent-make
                    'uv_dirent_t
                    '((pointer . name) (int . uv_dirent_type)))

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
    (handle-errors (uv-fs-stat (uv-default-loop)
                               (pffi-struct-pointer req-type)
                               (pffi-string->pointer fname/port)
                               (pffi-pointer-null)))
    (let* ((stat-pointer (uv-fs-get-ptr (pffi-struct-pointer req-type)))
           (result (file-info-record-make (pffi-pointer-get stat-pointer 'uint64 (* (pffi-size-of 'uint64) 0))
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
                                          follow?)))
      (uv-fs-cleanup (pffi-struct-pointer req-type))
      result)))

(define file-info-directory?
  (lambda (file-info)
    ; Try to open the file-info path as directory, if it fails say it's not a directory
    (let* ((file-path (file-info:fname/port file-info))
           (uv-result (uv-fs-opendir (uv-default-loop)
                                     (pffi-struct-pointer req-type)
                                     (pffi-string->pointer file-path)
                                     (pffi-pointer-null))))
      (cond ((not (file-exists? file-path))
             (uv-fs-cleanup (pffi-struct-pointer req-type))
             #f)
            ((not (= uv-result -20))
             (uv-fs-cleanup (pffi-struct-pointer req-type))
             #t)
            ; If it is a dir then it's open and needs to be closed
            (else (uv-fs-closedir (uv-default-loop)
                                  (pffi-struct-pointer req-type)
                                  (uv-fs-get-ptr (pffi-struct-pointer req-type))
                                  (pffi-pointer-null))
                  (uv-fs-cleanup (pffi-struct-pointer req-type))
                  #f)))))

(define create-directory
  (lambda (fname . permission-bits)
    (let ((mode (if (null? permission-bits) #o775 (car permission-bits))))
      (handle-errors (uv-fs-mkdir (uv-default-loop)
                                  (pffi-struct-pointer req-type)
                                  (pffi-string->pointer fname)
                                  mode
                                  (pffi-pointer-null))
                     (uv-fs-cleanup (pffi-struct-pointer req-type))
                     fname))))

(define delete-directory
  (lambda (fname)
    (handle-errors
      (uv-fs-rmdir (uv-default-loop)
                   (pffi-struct-pointer req-type)
                   (pffi-string->pointer fname)
                   (pffi-pointer-null))
      (uv-fs-cleanup (pffi-struct-pointer req-type))
      fname)))

(define directory-files
  (lambda (dir . args)
    (letrec* ((dotfiles? (if (null? args) #f (car args)))
              (result (handle-errors (uv-fs-scandir (uv-default-loop)
                                                    (pffi-struct-pointer req-type)
                                                    (pffi-string->pointer dir)
                                                    0
                                                    (pffi-pointer-null))
                                     dir))
              (uv-dirent-t (uv-dirent-make))
              (files (list))
              (looper
                (lambda ()
                  (let ((next-file (uv-fs-scandir-next (pffi-struct-pointer req-type)
                                                       (pffi-struct-pointer uv-dirent-t))))
                    (when (= next-file 0) ; End of file
                      (let ((file-name (pffi-pointer->string (pffi-struct-get uv-dirent-t 'name))))
                        (if (and (> (string-length file-name) 0)
                                 (char=? (string-ref file-name 0) #\.))
                          (if dotfiles? (set! files (append files (list file-name))))
                          (set! files (append files (list file-name))))
                        (looper)))))))
      (looper)
      (uv-fs-cleanup (pffi-struct-pointer req-type))
      files)))

(define real-path
  (lambda (path)
    (let* ((result (uv-fs-realpath (uv-default-loop)
                                   (pffi-struct-pointer req-type)
                                   (pffi-string->pointer path)
                                   (pffi-pointer-null)))
           (realpath (pffi-pointer->string (uv-fs-get-ptr (pffi-struct-pointer req-type)))))
      (uv-fs-cleanup (pffi-struct-pointer req-type))
      realpath)))

