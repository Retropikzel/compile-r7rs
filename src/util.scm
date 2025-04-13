(define string-replace
  (lambda (strin-content replace with)
    (string-map (lambda (c) (char=? c replace) with c))))

(define string-ends-with?
  (lambda (string-content end)
    (if (and (>= (string-length string-content) (string-length end))
             (string=? (string-copy string-content
                                    (- (string-length string-content)
                                       (string-length end)))
                       end))
      #t
      #f)))

(define string-starts-with?
  (lambda (string-content start)
    (if (and (>= (string-length string-content) (string-length start))
             (string=? (string-copy string-content
                                    0
                                    (string-length start))
                       start))
      #t
      #f)))

(define string-find
  (lambda (string-content character)
    (letrec* ((string-list (string->list string-content))
              (looper (lambda (c rest index)
                        (cond ((null? rest) #f)
                              ((char=? c character) index)
                              (else (looper (car rest)
                                            (cdr rest)
                                            (+ index 1)))))))
      (looper (car string-list)
              (cdr string-list)
              0))))

(define string-reverse
  (lambda (string-content)
    (list->string (reverse (string->list string-content)))))

(define path->filename
  (lambda (path)
    (let ((last-slash-index (string-find (string-reverse path) #\/)))
      (cond ((not last-slash-index) path)
            (else (string-copy path (- (string-length path)
                                         last-slash-index)))))))

(define change-file-suffix
  (lambda (path new-suffix)
    (let ((last-dot-index (string-find (string-reverse path) #\.)))
      (cond ((not last-dot-index) path)
            (else (string-append (string-copy path 0
                                              (- (string-length path)
                                                 last-dot-index
                                                 1))
                                 new-suffix))))))

(define string-join
  (lambda (string-list between)
    (apply string-append
           (let ((index 0)
                 (size (length string-list)))
             (map
               (lambda (item)
                 (cond ((= index 0) item)
                       ((= index size) item)
                       (else (string-append item between))))
               string-list)))))
