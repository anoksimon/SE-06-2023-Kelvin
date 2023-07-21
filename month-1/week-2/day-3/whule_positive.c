#include <stdio.h>

int main()
{
        int a, b = 1;

        printf("Enter a positive number: ");
        scanf("%d", &a);


        while (b <=  a)
        {
                printf("%d, ", b);
                b++;
        }
        printf("\n");
}
