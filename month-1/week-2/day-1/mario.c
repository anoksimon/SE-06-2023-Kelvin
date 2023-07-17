#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //  a variable to store the user input
    int height;
    // a loop to make sure the user inputs only value we need
    do
    {
        height = get_int("please enter the height of your pyramid: ");
    }
    while (height < 1 || height > 8);

    //a loop to get the height of pyramid
    for (int i = 0; i < height; i++)
    {
        // a loop to get the length
        for (int j = 0; j < height; j++)
        {
            // condition to print out the # for each line
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        // prints out a newline for each loop
        printf("\n");
    }
}
