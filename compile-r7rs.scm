(import (scheme base)
        (scheme write)
        (scheme process-context)
        (retropikzel pffi)
        (srfi 170))

(define interpreters '(chibi))
(define compilers '(chicken))
(define implementations (append interpreters compilers))

(define scheme (get-environment-variable "SCHEME"))
(when (not scheme) (error "Environment variable SCHEME not set."))
(define is-interpreter? (if (member (string->symbol scheme) interpreters) #t #f))
(define is-compiler? (if (member (string->symbol scheme) compilers) #t #f))


(when (not (member (string->symbol scheme) implementations))
  (error "Unsupported scheme implementation" scheme))

(define file-to-compile
  (if (> (length (command-line)) 1)
    (car (reverse (command-line)))
    #f))

(write file-to-compile)
(newline)
