(import (scheme base)
        (scheme write)
        (scheme process-context)
        (libs hello)
        (libs2 world))


(display hello)
(display " ")
(display world)
(newline)

(exit 0)
