find . -name "*.sh" -print | rev | cut -c4- | cut -f1 -d "/" | rev
