cat /etc/passwd | grep -o '^[^#]*' | awk 'NF' | sed -n 'n;p' | rev | sed 's/.*://' | sort -r | sed -n "$FT_LINE1,${FT_LINE2}p" | tr "\n" "," | sed  's/.$/./' | sed 's/,/, /g' | tr -d '\n'
