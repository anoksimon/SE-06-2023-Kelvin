#!/bin/bash

echo "Enter Fruits: "
read -r fruits


#loop over the user input
for fruit in $fruits
do
	echo "$fruit"
done
