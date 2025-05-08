(define-library
  (libs library-util)
  (import (scheme base)
          (scheme read)
          (scheme write)
          (scheme file)
          (libs util))
  (export library-dependencies)
  (include "library-util.scm"))

