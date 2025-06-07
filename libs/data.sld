(define-library
  (libs data)
  (import (scheme base)
          (scheme write)
          (scheme file)
          (scheme process-context)
          (srfi 170)
          (libs util))
  (export data)
  (begin
    (define data
      `((chezscheme
          (type . interpreter)
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append
                               `("scheme"
                                 " "
                                 ,(util-getenv "COMPILE_R7RS_CHEZSCHEME")
                                 " "
                                 "--quiet"
                                 " "
                                 ,@(map (lambda (item)
                                          (string-append "--libdirs " " " item ":"))
                                        (append prepend-directories append-directories))
                                 " "
                                 "--program"
                                 " "
                                 ,input-file)))))
        (chibi
          (type . interpreter)
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append
                               `("chibi-scheme"
                                 " "
                                 ,(util-getenv "COMPILE_R7RS_CHIBI")
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
          (library-command . ,(lambda (library-file prepend-directories append-directories r6rs?)
                                (let ((unit (string-append (if (string-starts-with? library-file "srfi")
                                                             (string-replace (string-cut-from-end library-file 4) #\/ #\-)
                                                             (string-replace (string-cut-from-end library-file 4) #\/ #\.))))
                                      (out (string-append (if (string-starts-with? library-file "srfi")
                                                            (string-replace (string-cut-from-end library-file 4) #\/ #\-)
                                                            (string-replace (string-cut-from-end library-file 4) #\/ #\.))
                                                          ".o"))
                                      (static-out (string-append (if (string-starts-with? library-file "srfi")
                                                                   (string-replace (string-cut-from-end library-file 4) #\/ #\-)
                                                                   (string-replace (string-cut-from-end library-file 4) #\/ #\.))
                                                                 ".a")))
                                  (apply string-append `("csc -R r7rs -X r7rs -static -c -J"
                                                         " "
                                                         "-unit"
                                                         " "
                                                         ,unit
                                                         " "
                                                         "-o"
                                                         " "
                                                         ,out
                                                         " "
                                                         ,(util-getenv "COMPILE_R7RS_CHICKEN")
                                                         " "
                                                         ,(search-library-file (append prepend-directories append-directories) library-file)
                                                         " "
                                                         "&&"
                                                         " "
                                                         "ar rcs"
                                                         " "
                                                         ,static-out
                                                         " "
                                                         ,out
                                                         " ")))))
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append `("csc -R r7rs -X r7rs -static"
                                               " "
                                               ,(util-getenv "COMPILE_R7RS_CHICKEN")
                                               " "
                                               ,@(map (lambda (item)
                                                        (string-append "-I " item " "))
                                                      (append append-directories prepend-directories))
                                               " "
                                               ,@(map (lambda (library-file)
                                                        (string-append "-uses "
                                                                       (if (string-starts-with? library-file "srfi")
                                                                         (string-replace (string-cut-from-end library-file 4) #\/ #\-)
                                                                         (string-replace (string-cut-from-end library-file 4) #\/ #\.))
                                                                       " "))
                                                      library-files)
                                               " "
                                               "-output-file"
                                               " "
                                               ,output-file
                                               " "
                                               ,input-file)))))
        (cyclone
          (type . compiler)
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append
                               `("cyclone"
                                 " "
                                 ,(util-getenv "COMPILE_R7RS_CYCLONE")
                                 " "
                                 "-o"
                                 " "
                                 ,output-file
                                 " "
                                 ,@(map (lambda (item) (string-append "-I " item " ")) prepend-directories)
                                 ,@(map (lambda (item) (string-append "-A " item " ")) append-directories)
                                 ,input-file)))))
        (foment
          (type . interpreter)
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append
                               `("foment"
                                 " "
                                 ,(util-getenv "COMPILE_R7RS_FOMENT")
                                 " "
                                 ,@(map (lambda (item)
                                          (string-append "-I" " " item " "))
                                        prepend-directories)
                                 ,@(map (lambda (item)
                                          (string-append "-A" " " item " "))
                                        append-directories)
                                 " "
                                 ,input-file)))))
        (gambit
          (type . compiler)
          (library-command . ,(lambda (library-file prepend-directories append-directories r6rs?)
                                (let ((out (string-append (string-cut-from-end library-file 4) ".o"))
                                      (static-out (string-append (string-cut-from-end library-file 4) ".a")))
                                  (apply string-append
                                         `("gsc -obj"
                                           " "
                                           ,(util-getenv "COMPILE_R7RS_GAMBIT")
                                           " "
                                           ,(string-cut-from-end library-file 4))))))
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append `("gsc"
                                              " "
                                              ,(util-getenv "COMPILE_R7RS_GAMBIT")
                                              " "
                                              "-:search="
                                              ,@(map (lambda (item)
                                                       (string-append item ""))
                                                     (append prepend-directories append-directories))
                                              " "
                                              "-o"
                                              " "
                                              ,output-file
                                              " "
                                              "-exe -nopreload"
                                              " "
                                              ,input-file))
                        #;(apply string-append
                               `("echo '#!/usr/bin/env -S gsi-script -f -:search="
                                 ,@(map (lambda (item)
                                          (string-append item "/:"))
                                        (append prepend-directories append-directories))
                                 "'"
                                 " "
                                 ">"
                                 " "
                                 ,(string-append (string-cut-from-end input-file 4) ".tmp")
                                 " "
                                 "&&"
                                 " "
                                 "cat"
                                 " "
                                 ,input-file
                                 " "
                                 ">>"
                                 " "
                                 ,(string-append (string-cut-from-end input-file 4) ".tmp")
                                 " "
                                 "&&"
                                 " "
                                 "gsc"
                                 " "
                                 ,(util-getenv "COMPILE_R7RS_GAMBIT")
                                 " "
                                 "-:search="
                                 ,@(map (lambda (item)
                                          (string-append item "/"))
                                        (append prepend-directories append-directories))
                                 " "
                                 "-o"
                                 " "
                                 ,output-file
                                 " "
                                 "-exe -nopreload"
                                 " "
                                 ,@(map (lambda (item) (string-append item "/ ")) prepend-directories)
                                 " "
                                 ,@(map (lambda (item) (string-append item "/ ")) append-directories)
                                 " "
                                 ,(string-append (string-cut-from-end input-file 4) ".tmp")
                                 ;,input-file
                                 )))))
        (gauche
          (type . interpreter)
          (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                        (apply string-append
                               `("gosh"
                                 " "
                                 ,(util-getenv "COMPILE_R7RS_GAUCHE")
                                 " "
                                 "-r7"
                                 " "
                                 ,@(map (lambda (item)
                                          (string-append "-I" " " item " "))
                                        prepend-directories)
                                 ,@(map (lambda (item)
                                          (string-append "-A" " " item " "))
                                        append-directories)
                                 " "
                                 ,input-file)))))
        (gerbil
          (type . compiler)
          #;(library-command . ,(lambda (library-file prepend-directories append-directories r6rs?)
          (apply string-append
                 `("gxc"
                   " "
                   ,(util-getenv "COMPILE_R7RS_GERBIL")
                   " "
                   ,library-file))))
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("gxc"
                             " "
                             ,(util-getenv "COMPILE_R7RS_GERBIL")
                             " "
                             "-prelude \":scheme/r7rs\""
                             " "
                             "-exe"
                             " "
                             "-static"
                             " "
                             ,@(map (lambda (item) (string-append item "/ ")) prepend-directories)
                             ,@(map (lambda (item) (string-append item "/ ")) append-directories)
                             " "
                             " "
                             ,input-file)))))
    (guile
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("guile"
                             " "
                             ,(util-getenv "COMPILE_R7RS_GUILE")
                             " "
                             ,(if r6rs? "--r6rs" "--r7rs")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-L" " " item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-L" " " item " "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (husk
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("huskc"
                             " "
                             ,(util-getenv "COMPILE_R7RS_HUSK")
                             " "
                             "-o"
                             " "
                             ,output-file
                             " "
                             ;,@(map (lambda (item) (string-append "-L" " " item " ")) prepend-directories)
                             ;,@(map (lambda (item) (string-append "-L" " " item " ")) append-directories)
                             " "
                             ,input-file)))))
    (ikarus
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("IKARUS_LIBRARY_PATH="
                             ,@(map (lambda (item)
                                      (string-append item ":"))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append item ":"))
                                    append-directories)
                             " "
                             "ikarus"
                             " "
                             ,(util-getenv "COMPILE_R7RS_IKARUS")
                             " "
                             "--r6rs-script"
                             " "
                             ,input-file)))))
    (ironscheme
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("ironscheme"
                             " "
                             ,(util-getenv "COMPILE_R7RS_IRONSCHEME")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I \"" item "\" "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-I \"" item "\" "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (kawa
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("kawa"
                             " "
                             "-J--add-exports=java.base/jdk.internal.foreign.abi=ALL-UNNAMED"
                             " "
                             "-J--add-exports=java.base/jdk.internal.foreign.layout=ALL-UNNAMED"
                             " "
                             "-J--add-exports=java.base/jdk.internal.foreign=ALL-UNNAMED"
                             " "
                             "-J--enable-native-access=ALL-UNNAMED"
                             " "
                             ,(util-getenv "COMPILE_R7RS_KAWA")
                             " "
                             "-Dkawa.import.path="
                             ,@(map (lambda (item)
                                      (string-append item "/*.sld:"))
                                    (append prepend-directories append-directories))
                             " "
                             "--r7rs"
                             " "
                             ,input-file)))))
    (larceny
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("larceny"
                             ,(util-getenv "COMPILE_R7RS_LARCENY")
                             " "
                             "-nobanner"
                             " "
                             "-quiet"
                             " "
                             "-utf8"
                             " "
                             ,(if r6rs? "-r6rs" "-r7rs")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I " item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-A " item " "))
                                    append-directories)
                             " "
                             "-program"
                             " "
                             ,input-file)))))
    (loko
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (let ((out (string-cut-from-end input-file 4)))
                    (apply string-append
                           `("LOKO_LIBRARY_PATH="
                             ,@(map (lambda (item)
                                      (string-append item ":"))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append item ":"))
                                    append-directories)
                             " "
                             "loko "
                             " "
                             ,(util-getenv "COMPILE_R7RS_LOKO")
                             " "
                             ,(if r6rs? "-std=r6rs" "-std=r7rs")
                             " "
                             "--compile"
                             " "
                             ,input-file
                             " "
                             "&&"
                             " "
                             "mv"
                             " "
                             ,out
                             " "
                             ,output-file))))))
    (meevax
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("meevax"
                             " "
                             ,(util-getenv "COMPILE_R7RS_MEEVAX")
                             " "
                             ;,@(map (lambda (item) (string-append "--load " item " ")) library-files)
                             ;,@(map (lambda (item) (string-append " " item " ")) prepend-directories)
                             ;,@(map (lambda (item) (string-append " " item " ")) append-directories)
                             " "
                             ,input-file)))))
    (mit-scheme
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("mit-scheme"
                             " "
                             ,(util-getenv "COMPILE_R7RS_MIT_SCHEME")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "--load " item " "))
                                    library-files)
                             " "
                             "--load"
                             " "
                             ,input-file
                             " "
                             "--eval \"(exit 0)\"")))))
    (mosh
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `(;"MOSH_LOAD_PATH="
                             ;,@(map (lambda (item) (string-append item ":")) prepend-directories)
                             ;,@(map (lambda (item) (string-append item ":")) append-directories)
                             " "
                             "mosh"
                             " "
                             ,(util-getenv "COMPILE_R7RS_MOSH")
                             " "
                             ,@(map (lambda (item) (string-append "--loadpath=" item " ")) prepend-directories)
                             ,@(map (lambda (item) (string-append "--loadpath=" item " ")) append-directories)
                             " "
                             ,input-file)))))
    (picrin
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("picrin"
                             " "
                             ,(util-getenv "COMPILE_R7RS_PICRIN")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-l " item " "))
                                    library-files)
                             " "
                             "-e"
                             " "
                             ,input-file)))))
    (racket
      (type . interpreter)
      (library-command . ,(lambda (library-file prepend-directories append-directories r6rs?)
                            (let ((library-rkt-file (change-file-suffix library-file ".rkt")))
                              (apply string-append
                                     `("printf"
                                       " "
                                       "'#lang r7rs\\n(import (scheme base))\\n(include \""
                                       ,(path->filename library-file)
                                       "\")\\n"
                                       "'"
                                       " "
                                       ">"
                                       " "
                                       ,library-rkt-file)))))
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (let ((rkt-input-file (if (string=? input-file "")
                                            ""
                                            (change-file-suffix input-file ".rkt"))))
                      (if r6rs?
                        #t
                        (when (not (string=? rkt-input-file ""))
                          (when (file-exists? rkt-input-file)
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
                              (newline)))))
                      (apply string-append
                             `("racket"
                               " "
                               ,(util-getenv "COMPILE_R7RS_RACKET")
                               " "
                               "-I"
                               " "
                               ,(if r6rs? "r6rs" "r7rs")
                               " "
                               ,@(map (lambda (item)
                                        (string-append "-S " item " "))
                                      prepend-directories)
                               ,@(map (lambda (item)
                                        (string-append "-S " item " "))
                                      append-directories)
                               " "
                               ,(if r6rs? input-file rkt-input-file)
                               ))))))
    (sagittarius
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("sash"
                             " "
                             ,(util-getenv "COMPILE_R7RS_SAGITTARIUS")
                             " "
                             ,(if r6rs? "-r6" "-r7")
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("skint"
                             " "
                             ,(util-getenv "COMPILE_R7RS_SKINT")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I " item "/ "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-A " item "/ "))
                                    append-directories)
                             " "
                             ,input-file)))))
    (stak
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("stak"
                             " "
                             ,(util-getenv "COMPILE_R7RS_STAK")
                             " "
                             ;,@(map (lambda (item) (string-append "-I " item " ")) prepend-directories)
                             ;,@(map (lambda (item) (string-append "-A " item " ")) append-directories)
                             " "
                             ,input-file)))))
    (stklos
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("stklos"
                             " "
                             ,(util-getenv "COMPILE_R7RS_STKLOS")
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
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
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
                             ,(util-getenv "COMPILE_R7RS_TR7")
                             " "
                             ,input-file)))))
    (vicare
      (type . compiler)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("vicare"
                             " "
                             ,(util-getenv "COMPILE_R7RS_VICARE")
                             " "
                             ,@(map (lambda (item)
                                      (string-append "-I " item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "-A " item " "))
                                    append-directories)
                             " "
                             "--compile-program"
                             " "
                             ,input-file)))))
    (ypsilon
      (type . interpreter)
      (command . ,(lambda (input-file output-file prepend-directories append-directories library-files r6rs?)
                    (apply string-append
                           `("ypsilon"
                             " "
                             ,(util-getenv "COMPILE_R7RS_YPSILON")
                             " "
                             ,(if r6rs? "--r6rs" "--r7rs")
                             " "
                             "--mute"
                             " "
                             "--quiet"
                             " "
                             ,@(map (lambda (item)
                                      (string-append "--sitelib=" item " "))
                                    prepend-directories)
                             ,@(map (lambda (item)
                                      (string-append "--sitelib=" item " "))
                                    append-directories)
                             " "
                             "--top-level-program"
                             " "
                             ,input-file)))))))))
