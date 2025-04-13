(define data
  `((chibi
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("chibi-scheme"
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I" " " item " "))
                                    prepend-directories)
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-A" " " item " "))
                                    append-directories)
                             ,input-file)))))
    (chicken
      (type . compiler)
      (library-command . ,(lambda (library-file prepend-directories append-directories)
                            (string-append "csc -J "
                                           " "
                                           library-file)))
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (string-append "csc -static " input-file))))
    (gambit
      (type . compiler)
      (library-command . ,(lambda (library-file prepend-directories append-directories)
                            (apply string-append
                                   `("gsc -c"
                                     " "
                                     "-o"
                                     " "
                                     ,(string-append (string-copy library-file
                                                                  0
                                                                  (- (string-length library-file)
                                                                     4))
                                                     ".c ")
                                     " "
                                     ,@(map (lambda (item) (string-append item "/ ")) prepend-directories)
                                     ,@(map (lambda (item) (string-append item "/ ")) append-directories)
                                     ,library-file))))
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("gsc -nopreload -exe"
                             " "
                             ,@(map (lambda (item) (string-append item "/ ")) prepend-directories)
                             ,@(map (lambda (item) (string-append item "/ ")) append-directories)
                             " "
                             ,input-file
                             ;" "
                             ;"&&"
                             ;" "
                             ;"gsc"
                             ;" "
                             ;"-o"
                             ;" "
                             ;,output-file
                             ;" "
                             ;"-exe"
                             ;,@(map (lambda (item) (string-append item "/ ")) prepend-directories)
                             ;,@(map (lambda (item) (string-append item "/ ")) append-directories)
                             ;" "
                             ;,@(map (lambda (item) (string-append (string-copy item 0 (- (string-length item) 4)) ".c")) library-files)
                             ;" "
                             ;,(string-copy input-file 0 (- (string-length input-file) 4))
                             ;".c"
                             )))))
    (cyclone
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("cyclone "
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I" " " item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-A" " " item " "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (gauche
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("gosh -r7"
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I" " " item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-A" " " item " "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (loko
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("LOKO_LIBRARY_PATH="
                             ,@(map (lambda (item)
                                      (string-append item ":"))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append item ":"))
                                    append-directories)
                             " "
                             "loko -std=r7rs --compile"
                             " "
                             ,input-file)))))
    (guile
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("guile --r7rs"
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-L" " " item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-L" " " item " "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (kawa
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("kawa --r7rs --full-tailcalls"
                             " "
                             "-Dkawa.import.path="
                             ,@(map (lambda (item)
                                      (string-append item ":" item "/*.sld:" " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append item ":" item "/*.sld:" " "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (mosh
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (apply string-append
                           `("mosh"
                             " "
                             ,@(map (lambda (item)
                                      (string-append "--loadpath=" item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "--loadpath=" item " "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (racket
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                    (let ((rkt-input-file (if (string=? input-file "")
                                            ""
                                            (change-file-suffix input-file ".rkt"))))
                      (when (not (string=? rkt-input-file ""))
                        (if (file-exists? rkt-input-file)
                          (delete-file rkt-input-file))
                        (with-output-to-file
                          rkt-input-file
                          (lambda ()
                            (display "#lang r7rs")
                            (newline)
                            (display "(import (scheme base))")
                            (newline)
                            (display "(include \"")
                            (display (path->filename input-file))
                            (display "\")")
                            (newline))))
                      (for-each
                        (lambda (file)
                          (let ((library-rkt-file (change-file-suffix file ".rkt")))
                            (if (file-exists? library-rkt-file)
                              (delete-file library-rkt-file))
                            (with-output-to-file
                              library-rkt-file
                              (lambda ()
                                (display "#lang r7rs")
                                (newline)
                                (display "(import (scheme base))")
                                (newline)
                                (display "(include \"")
                                (display (path->filename file))
                                (display "\")")
                                (newline)))))
                        library-files)
                      (apply string-append
                             `("PLTCOLLECTS="
                               ,(string-join prepend-directories ":")
                               ,(string-join append-directories ":")
                               " "
                               "raco exe --orig-exe ++lang r7rs -o "
                               ,output-file
                               " "
                               ,rkt-input-file))))))
      (sagittarius
        (type . interpreter)
        (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                      (apply string-append
                             `("sash -r7"
                               " "
                               ,@(map (lambda (item)
                                        (string-append "-L " item " "))
                                      prepend-directories)
                               ,@(map (lambda (item)
                                        (string-append "-A " item " "))
                                      append-directories)
                               " "
                               ,input-file)))))
      (skint
        (type . interpreter)
        (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                      (apply string-append
                             `("skint"
                               " "
                               ,@(map (lambda (item)
                                        (string-append "-I " item "/ "))
                                      prepend-directories)
                               ,@(map (lambda (item)
                                        (string-append "-A " item "/ "))
                                      append-directories)
                               " "
                               ,input-file)))))
      (stklos
        (type . interpreter)
        (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                      (apply string-append
                             `("stklos"
                               " "
                               ,@(map (lambda (item)
                                        (string-append "-I " item " "))
                                      prepend-directories)
                               ,@(map (lambda (item)
                                        (string-append "-A " item " "))
                                      append-directories)
                               " "
                               ,input-file)))))
      (tr7
        (type . interpreter)
        (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                      (apply string-append
                             `("TR7_LIB_PATH="
                               ,@(map (lambda (item)
                                        (string-append item ":"))
                                      prepend-directories)
                               ,@(map (lambda (item)
                                        (string-append item ":"))
                                      append-directories)
                               " "
                               "tr7i"
                               " "
                               ,input-file)))))
      (ypsilon
        (type . interpreter)
        (command . ,(lambda (input-file output-file prepend-directories append-directories library-files)
                      (apply string-append
                             `("ypsilon --r7rs"
                               " "
                               ,@(map (lambda (item)
                                        (string-append "--sitelib=" item))
                                      prepend-directories)
                               ,@(map (lambda (item)
                                        (string-append "--sitelib=" item))
                                      append-directories)
                               " "
                               ,input-file)))))))
