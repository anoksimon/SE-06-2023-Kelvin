#include <stdio.h>


int main()
{
    int age1 = 90; //asignment operator
    int age2 = 45;
    int age3 = 50;


    if (age1 == 90 && age2 == 45) //comparison operator
    {
        age3 = age1 + age2;

       printf("age3: %d", age3);
    }

        age3 = 50;

        printf("\nage3: %d \n", age3);

  
}