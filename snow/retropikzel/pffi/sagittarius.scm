(define pffi-type->native-type
  (lambda (type)
    (cond ((equal? type 'int8) 'int8_t)
          ((equal? type 'uint8) 'uint8_t)
          ((equal? type 'int16) 'int16_t)
          ((equal? type 'uint16) 'uint16_t)
          ((equal? type 'int32) 'int32_t)
          ((equal? type 'uint32) 'uint32_t)
          ((equal? type 'int64) 'int64_t)
          ((equal? type 'uint64) 'uint64_t)
          ((equal? type 'char) 'char)
          ((equal? type 'unsigned-char) 'char)
          ((equal? type 'short) 'short)
          ((equal? type 'unsigned-short) 'unsigned-short)
          ((equal? type 'int) 'int)
          ((equal? type 'unsigned-int) 'unsigned-int)
          ((equal? type 'long) 'long)
          ((equal? type 'unsigned-long) 'unsigned-long)
          ((equal? type 'float) 'float)
          ((equal? type 'double) 'double)
          ((equal? type 'pointer) 'void*)
          ((equal? type 'string) 'void*)
          ((equal? type 'void) 'void)
          ((equal? type 'callback) 'callback)
          ((and (pair? type) (equal? 'struct (car type))) 'void*)
          (else #f))))

(define pffi-pointer?
  (lambda (object)
    (or (pointer? object)
        (string? object))))

(define-syntax pffi-define
  (syntax-rules ()
    ((_ scheme-name shared-object c-name return-type argument-types)
     (define scheme-name
       (make-c-function shared-object
                        (pffi-type->native-type return-type)
                        c-name
                        (map pffi-type->native-type argument-types))))))

(define-syntax pffi-define-callback
  (syntax-rules ()
    ((_ scheme-name return-type argument-types procedure)
     (define scheme-name
       (make-c-callback (pffi-type->native-type return-type)
                        (map pffi-type->native-type argument-types)
                        procedure)))))

(define size-of-type
  (lambda (type)
    (cond ((eq? type 'int8) size-of-int8_t)
          ((eq? type 'uint8) size-of-uint8_t)
          ((eq? type 'int16) size-of-int16_t)
          ((eq? type 'uint16) size-of-uint16_t)
          ((eq? type 'int32) size-of-int32_t)
          ((eq? type 'uint32) size-of-uint32_t)
          ((eq? type 'int64) size-of-int64_t)
          ((eq? type 'uint64) size-of-uint64_t)
          ((eq? type 'char) size-of-char)
          ((eq? type 'unsigned-char) size-of-char)
          ((eq? type 'short) size-of-short)
          ((eq? type 'unsigned-short) size-of-unsigned-short)
          ((eq? type 'int) size-of-int)
          ((eq? type 'unsigned-int) size-of-unsigned-int)
          ((eq? type 'long) size-of-long)
          ((eq? type 'unsigned-long) size-of-unsigned-long)
          ((eq? type 'float) size-of-float)
          ((eq? type 'double) size-of-double)
          ((eq? type 'pointer) size-of-void*)
          ((eq? type 'void) 0)
          ((eq? type 'string) size-of-void*)
          ((eq? type 'callback) size-of-void*)
          (else #f))))

#;(define pffi-pointer-allocate
  (lambda (size)
    (c-malloc size)))

(define pffi-pointer-address
  (lambda (pointer)
    (address pointer 0)))

(define pffi-pointer-null
  (lambda ()
    (empty-pointer)))

#;(define (string->c-string s)
  (let* ((bv (string->utf8 s))
         (p  (allocate-pointer (+ (bytevector-length bv) 1))))
    (do ((i 0 (+ i 1)))
      ((= i (bytevector-length bv)) p)
      (pointer-set-c-uint8! p i (bytevector-u8-ref bv i)))
    p))

#;(define pffi-string->pointer
  (lambda (string-content)
    (string->c-string string-content)))

#;(define pffi-pointer->string
  (lambda (pointer)
    (pointer->string pointer)))

(define pffi-shared-object-load
  (lambda (path options)
    (open-shared-library path)))

#;(define pffi-pointer-free
  (lambda (pointer)
    (when (pointer? pointer)
      (c-free pointer))))

(define pffi-pointer-null?
  (lambda (pointer)
    (null-pointer? pointer)))

(define pffi-pointer-set!
  (lambda (pointer type offset value)
    (cond ((equal? type 'int8) (pointer-set-c-int8_t! pointer offset value))
          ((equal? type 'uint8) (pointer-set-c-uint8_t! pointer offset value))
          ((equal? type 'int16) (pointer-set-c-int16_t! pointer offset value))
          ((equal? type 'uint16) (pointer-set-c-uint16_t! pointer offset value))
          ((equal? type 'int32) (pointer-set-c-int32_t! pointer offset value))
          ((equal? type 'uint32) (pointer-set-c-uint32_t! pointer offset value))
          ((equal? type 'int64) (pointer-set-c-int64_t! pointer offset value))
          ((equal? type 'uint64) (pointer-set-c-uint64_t! pointer offset value))
          ((equal? type 'char) (pointer-set-c-char! pointer offset (char->integer value)))
          ((equal? type 'short) (pointer-set-c-short! pointer offset value))
          ((equal? type 'unsigned-short) (pointer-set-c-unsigned-short! pointer offset value))
          ((equal? type 'int) (pointer-set-c-int! pointer offset value))
          ((equal? type 'unsigned-int) (pointer-set-c-unsigned-int! pointer offset value))
          ((equal? type 'long) (pointer-set-c-long! pointer offset value))
          ((equal? type 'unsigned-long) (pointer-set-c-unsigned-long! pointer offset value))
          ((equal? type 'float) (pointer-set-c-float! pointer offset value))
          ((equal? type 'double) (pointer-set-c-double! pointer offset value))
          ((equal? type 'void) (pointer-set-c-pointer! pointer offset value))
          ((equal? type 'pointer) (pointer-set-c-pointer! pointer offset value)))))

(define pffi-pointer-get
  (lambda (pointer type offset)
    (cond ((equal? type 'int8) (pointer-ref-c-int8_t pointer offset))
          ((equal? type 'uint8) (pointer-ref-c-uint8_t pointer offset))
          ((equal? type 'int16) (pointer-ref-c-int16_t pointer offset))
          ((equal? type 'uint16) (pointer-ref-c-uint16_t pointer offset))
          ((equal? type 'int32) (pointer-ref-c-int32_t pointer offset))
          ((equal? type 'uint32) (pointer-ref-c-uint32_t pointer offset))
          ((equal? type 'int64) (pointer-ref-c-int64_t pointer offset))
          ((equal? type 'uint64) (pointer-ref-c-uint64_t pointer offset))
          ((equal? type 'char) (integer->char (pointer-ref-c-char pointer offset)))
          ((equal? type 'short) (pointer-ref-c-short pointer offset))
          ((equal? type 'unsigned-short) (pointer-ref-c-unsigned-short pointer offset))
          ((equal? type 'int) (pointer-ref-c-int pointer offset))
          ((equal? type 'unsigned-int) (pointer-ref-c-unsigned-int pointer offset))
          ((equal? type 'long) (pointer-ref-c-long pointer offset))
          ((equal? type 'unsigned-long) (pointer-ref-c-unsigned-long pointer offset))
          ((equal? type 'float) (pointer-ref-c-float pointer offset))
          ((equal? type 'double) (pointer-ref-c-double pointer offset))
          ((equal? type 'void) (pointer-ref-c-pointer pointer offset))
          ((equal? type 'pointer) (pointer-ref-c-pointer pointer offset)))))
