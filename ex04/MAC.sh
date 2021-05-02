ifconfig | grep "ether" | grep -v auto | cut -c 8- | tr -d " "
