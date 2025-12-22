;;; acronym.el --- Acronym (exercism)  -*- lexical-binding: t; -*-

;;; Commentary:

;;; Code:
(defun get-first-alpha-char (s)
  (let ((match-pos (string-match "[A-Z]" s)))
    (if match-pos
        (substring s match-pos (+ match-pos 1))
      "" )))

(defun acronym (phrase)
  (let* (
         (sen (split-string (upcase phrase) "[\s-]"))
         (sll (mapcar #'get-first-alpha-char sen)))
    (s-join "" sll)))

(acronym "The Road _Not_ Taken")

(provide 'acronym)
;;; acronym.el ends here
