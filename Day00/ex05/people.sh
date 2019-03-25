ldapsearch -Q -u "uid=z*" | grep "cn: " | sort -r | cut -c5-
