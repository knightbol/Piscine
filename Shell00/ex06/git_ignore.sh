#!/bin/bash
# -o for other (untracked files: not added to Git)
# -i for ignored (filters files matching .gitignore)
# --exclude-standard ensures .gitignore and default ignore rules are applied

git ls-files -o -i --exclude-standard
