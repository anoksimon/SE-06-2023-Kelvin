#include <stdio.h>

int main()
{
    double num1, num2, result;

    char operator;

    // Get input from user and validate the inputs data type

    printf("Input your calculation eg(3 + 3): ");
    if (scanf("%f %c %f", &num1, &operator, &num2) != 3) 
    {
        printf("Invalid input. Exiting... \n");
        return 1;
    };


    //Perform calculations based on operations
    if (operator == '+')
    {
        result = num1 + num2;
        printf(" Result: %.2lf", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
     else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } 
    else if (operator == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed. Exiting...\n");
            return 1;
        }
        result = num1 / num2;
        printf("Result: %.2lf\n", result);
    } 
    else {
        printf("Invalid operator. Exiting...\n");
        return 1;
    }

    return 0;
}

