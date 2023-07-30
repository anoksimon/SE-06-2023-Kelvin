#!/bin/bash

echo "Enter frist_number"
read frist_number
echo "Enter second_number"
read second_number

echo "Enter Choice of operation"
echo "1 = Addition"
echo "2 = Subtraction"
echo "3 = Multiple"
echo "4 = Division"
read -r Choice

result1=$((frist_number+second_number))
result2=$((frist_number-second_number))
result3=$((frist_number*second_number))
result4=$((frist_number/second_number))


if [ $Choice -eq 1 ]; then
    echo "Result: $result1"
elif [ $Choice -eq 2 ]; then
    echo "Result: $result2"
elif [ $Choice -eq 3 ]; then
    echo "Result: $result3"
else
    echo "$result4"
fi
