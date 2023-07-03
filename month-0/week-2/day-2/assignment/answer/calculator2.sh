#!/bin/bash

read -p "Enter the first number: " num1

read -p "Enter the operator: " operator

read -p "Enter second number: " num2


if [[ $operator == "+" ]];
then
        result=$((num1 + num2))
elif [[ $operator == "-" ]];
then
        result=$((num1 - num2))
elif [[ $operator == "*" ]];
then
        result=$((num1 * num2))
elif [[ $operator == "/" ]];
then
        result=$(echo "scale=2; $num1 / $num2" | bc)
else
        echo "Invalid operator"
        exit 1
fi

echo "$result"
