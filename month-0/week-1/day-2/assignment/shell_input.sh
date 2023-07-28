#!/bin/bash

#> Write a shell script that does the following:>
#   > 1. Asks for the user name, cohort, and score.
#  > 2. If the score is less than 80, print out "You're Out."
# > 3. If the score is greater than 80, print out "You're In."

echo "What is your Name"
read Name
echo "Which Cohort are"
read Cohort
echo "What is your Score"
read Score

if [ $Score -lt 80 ];
then 
	echo "$Name your score is $Score You are Out"
else 
	echo "$name your score is $Score You are In"
fi
