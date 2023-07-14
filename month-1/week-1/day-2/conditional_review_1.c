#include <stdio.h>

int main()
{   
    //get the scores of the five subjects
    float phy, chem, bio, math, comp;
    float percentage;

    printf("Enter scores for 5 subject: ");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &comp);

    //calculate percentage
    percentage = (phy  + chem + bio + math + comp) / 5.0;

    //display the percentage
    printf("Perecentage is = %.2f \n", percentage);


    if (percentage >= 90 )
        printf("Grade A \n");
    else if (percentage >= 80)
        printf("Grade B \n");
    else if (percentage >= 70)
        printf("Grade C \n");
    else if (percentage >= 60)
        printf("Grade D \n");
    else if (percentage >= 40)
        printf("Grade E \n");
    else
        printf("Grade F \n");
    

    return 0;
}
