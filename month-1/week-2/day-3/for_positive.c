#include <stdio.h>


int main()
{
        int a, b;

        printf("Enter a positive number: ");
        scanf("%d", &a);

        for( b = 1; b <=a; b++)
                printf("%d ", b);

        printf("\n");


        return  0;
}
