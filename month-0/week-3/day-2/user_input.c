#include <stdio.h>


//CONDITIONALS IN C.

int main()
{
    //TODO
    //Display a user name as a string, age as an int, score as a 2digit float, and grade as a char

    //Step 1 starts
    char name[20];
    int age;
    float score;
    char grade;
    //Step 1 ends


    //Step 2  and 3 starts
    printf("Enter name:");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter score: ");
    scanf("%f", &score);
    printf("Enter grade:");
    scanf(" %c", &grade);
    //Step 2 and 3 ends

    //step 4 starts
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Score: %f\n", score);
    printf("Grade: %c \n", grade);


    

}
