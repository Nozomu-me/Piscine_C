find . -type f | git check-ignore --stdin | rev | cut -d / -f1 | rev
