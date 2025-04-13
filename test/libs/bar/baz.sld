(define-library
  (bar baz)
  (import (scheme base)
          (scheme write))
  (export hello)
  (begin
    (define hello
      (lambda ()
        (display "Hello")
        (newline)))))
