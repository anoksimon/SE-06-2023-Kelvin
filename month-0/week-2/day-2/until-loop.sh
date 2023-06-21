#until loop in shell

count=1

until [ $count -ge 5 ]
do 
	echo "Count: $count"
	count=$((count+1))
done
