(define filter-out-scheme-dependencies
  (lambda (dependencies)
    (let ((result (list)))
      (for-each
        (lambda (dependency)
          (when (not (equal? (car dependency) 'scheme))
            (set! result (append result (list dependency)))))
        dependencies)
      result)))

(define flatten-dependencies
  (lambda (result dependencies)
    (if (null? dependencies)
      result
      (flatten-dependencies (append result
                                    (list
                                      (if (or (equal? (car (car dependencies)) 'only)
                                              (equal? (car (car dependencies)) 'except)
                                              (equal? (car (car dependencies)) 'prefix)
                                              (equal? (car (car dependencies)) 'rename))
                                        (car (cdr (car dependencies)))
                                        (car dependencies))))
                            (cdr dependencies)))))

(define library-name->path
  (lambda (name)
    (string-append
      (string-cut-from-end
        (apply string-append
               (map (lambda (item)
                      (string-append
                        (if (symbol? item)
                          (symbol->string item)
                          (number->string item))
                        "/"))
                    name))
        1)
      ".sld")))

(define get-imports
  (lambda (result implementation rest)
    (cond ((null? rest) result)
          ((equal? (car rest) 'import) (cdr rest))
          ((member 'cond-expand (car rest))
           (if (assoc implementation (cdr (car rest)))
             (get-imports result
                          implementation
                          (cdr (assoc implementation
                                      (cdr (car rest)))))
             (get-imports result
                          implementation
                          (cdr (assoc 'else
                                      (cdr (car rest)))))))
          ((member 'import (car rest))
           (get-imports (append result (list) (cdr (car rest)))
                        implementation
                        (cdr rest)))
          (else (get-imports result implementation (cdr rest))))))

(define remove-nonexistent
  (lambda (directories paths)
    (apply append
           (map
             (lambda (path)
               (if (file-exists? (search-library-file directories path))
                 (list path)
                 (list)))
             paths))))

(define library-dependencies
  (lambda (implementation directories path previous-indent indent)
    (for-each (lambda (item) (display " ")) indent)
    (display path)
    (let ((full-path (search-library-file directories path)))
      (if (not (file-exists? full-path))
        (begin
          (display #\space)
          (display "not found, ignoring")
          (newline)
          (list))
        (begin
          (newline)
          (letrec* ((raw-data (with-input-from-file full-path (lambda () (read))))
                    (data (if (equal? (car raw-data) 'define-library)
                            (cdr raw-data)
                            raw-data))
                    (imports (flatten-dependencies (list)
                                                   (get-imports (list)
                                                                implementation
                                                                data)))
                    (filtered-imports (filter-out-scheme-dependencies imports))
                    (paths (map library-name->path filtered-imports))
                    (flat-tree (apply append
                                      (map (lambda (dependency-path)
                                             (append (list dependency-path)
                                                     (reverse (library-dependencies implementation
                                                                                    directories
                                                                                    dependency-path
                                                                                    indent
                                                                                    (append indent (list #\space #\space))))))
                                           paths))))
            (remove-nonexistent directories (reverse flat-tree))))))))
