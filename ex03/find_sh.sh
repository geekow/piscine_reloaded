find . -name '*.sh' -print | rev | cut -d "/" -f1 | cut -c 4- | rev
