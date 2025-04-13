(import (scheme base)
        (scheme write)
        (scheme process-context))

(define scheme (get-environment-variable "SCHEME"))
(when (not scheme)
  (error "Environment variable SCHEME not set."))

(define interpreters '(chibi))
(define compilers '(chicken))
(define implementations (append interpreters compilers))

(define is-interpreter? (if (member (string->symbol scheme) interpreters) #t #f))
(define is-compiler? (if (member (string->symbol scheme) compilers) #t #f))

(when (not (member (string->symbol scheme) implementations))
  (error "Unsupported scheme implementation" scheme))

