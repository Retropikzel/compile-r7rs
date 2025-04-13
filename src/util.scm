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
