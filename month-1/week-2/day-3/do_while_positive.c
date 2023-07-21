#include <stdio.h>


int main()
{
        int a, b;

        do
        {
                printf("Enter a positive number: ");
                scanf("%d", &a);
        }
        while ( a < 1);

        for (b = 1; b <=a; b++)
                printf("%d ", b);

        printf("\n");
}
