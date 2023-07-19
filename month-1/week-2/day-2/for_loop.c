#include <stdio.h>


int main()
{
    int scores;
    
    
    printf("Enter your scores: \n");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &scores);
        
        printf("Entered Number %d\n", scores);
        
        
    }
    
    
}
