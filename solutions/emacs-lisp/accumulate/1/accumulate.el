;;; accumulate.el --- Accumulate (exercism)  -*- lexical-binding: t; -*-

(defun accumulate (lst op)
  (let ((hd (pop lst)))
    (if (eq nil hd) lst
      (cons (funcall op hd) (accumulate lst op)))))

(provide 'accumulate)
;;; accumulate.el ends here
