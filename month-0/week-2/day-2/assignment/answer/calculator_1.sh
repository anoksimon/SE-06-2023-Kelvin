# Create a simple calculator in shell script.
# Your calculator should be able to add, subtract, multiply and divide any two numbers.
# recieved from the user as inputs.

#!/bin/bash

#//TODO STEP 1: Get and read user input.

echo -n "Enter the first number: "
read num1

echo -n "Enter the operator (+, -, *, /): "
read operator

echo  -n "Enter the second number: "
read num2

# TODO STEP 2: perform the operation based on the operator the user entered
case $operator in
        "+")
                result=`expr $num1 + $num2`
                ;;
        "-")
                result=`expr $num1 - $num2`
                ;;
        "*")
                result=`expr $num1 \* $num2`
                ;;
        "/")
                         result=`expr $num1 / $num2`
                ;;
        *)
                echo "Invalid Operator"
                exit 1
                ;;
esac
                #Display the result
                echo "$result"
