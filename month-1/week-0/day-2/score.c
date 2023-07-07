#include <stdio.h>

int main()
{
    int cohort; 
    char username[25]; 
    float score;

    printf("Username: ");
    scanf("%s", username);

    printf("Cohort: ");
    scanf("%d", &cohort);

    printf("Score: ");
    scanf("%f", &score);

    if (cohort < 8 || cohort > 18)
    {
            printf("Not a valid cohort");
    }
    else if (score > 150)
    {
        if (cohort != 8) 
        {
            int promote = cohort - 1;
            printf("%d", promote);
        }
        else
        printf("Already at the max cohort!!!");  
    }

   else if (score < 80 && cohort == 18 )
   {
    int defer = cohort + 1;
    printf("You have been defered to cohort %d. But not yet available", defer );

   }

   else if (score < 70)
   {
    int defer = cohort + 1;
    printf("You have been defered to cohort %d.", defer );

   }

   else if (cohort != 8 && score < 30)
    {
        printf("You have been removed from the program. Try agin later.");
    }




    // printf("%s %d %.2f", username, cohort, score);
}