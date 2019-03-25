ldapsearch -Q "sn=*you*" | grep '^sn: ' | wc -l | tr -d ' '
