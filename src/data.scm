(define data
  `((chibi
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
                    (string-append "csc " input-file))))
    (cyclone
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
    (guile
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
    (sagittarius
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories)
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
