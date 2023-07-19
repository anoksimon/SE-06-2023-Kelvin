#include <stdio.h>


int main()
{
    //Write a program to only accept digits between 20 - 40. If any other input is provided, reprompt the user.
    
   int input;
   
   
    do{
        printf("Enter number: ");
        scanf("%d", &input);
    }
    
    while ( input <= 20 || input >= 40);
}
