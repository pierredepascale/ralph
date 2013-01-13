;;; ralph.el -- ralph mode

(define-generic-mode ralph-mode '("//" ("/*" . "*/"))
                     '("def" "class" "module" "library" "if" "select" "case"
                       "block" "begin" "end" "let" "local" "for" "else")
                     nil
                     (list ".*\.ralph")
                     nil)
