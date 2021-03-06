;;;; Cyclone Scheme
;;;; https://github.com/justinethier/cyclone
;;;;
;;;; A case-lambda implementation, based off the one from chibi scheme.
;;;;
(define-library (scheme case-lambda)
  (import (scheme base))
  (export 
    case-lambda
;    %case
  )
  (begin

   (define-syntax %case
     (syntax-rules ()
       ((%case args len n p ((params ...) . body) . rest)
        (if (= len (length '(params ...)))
            (apply (lambda (params ...) . body) args)
            (%case args len 0 () . rest)))
       ((%case args len n (p ...) ((x . y) . body) . rest)
        (%case args len (+ n 1) (p ... x) (y . body) . rest))
       ((%case args len n (p ...) (y . body) . rest)
        (if (>= len n)
            (apply (lambda (p ... . y) . body) args)
            (%case args len 0 () . rest)))
       ((%case args len n p)
        (error "case-lambda: no cases matched"))))
   (define-syntax case-lambda
     (syntax-rules ()
       ((case-lambda . clauses)
        (lambda args (let ((len (length args))) (%case args len 0 () . clauses))))))
        ;(lambda args (let ((len (length* args))) (%case args len 0 () . clauses))))))
))

