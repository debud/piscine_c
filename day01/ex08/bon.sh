ldapsearch "sn=*bon*" | grep "bon" | grep "alias" | wc -l | sed "s/ //g"
