#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, negative, or zero
 * @i: The number to be checked
 *
 * Description: This function receives an integer and prints whether it's
 * positive, negative, or zero.
 */
void positive_or_negative(int i)
{
    printf("%d ", i); /* Print the number followed by a space */

    if (i == 0)
    {
        printf("is zero\n");
    }
    else
    {
        if (i < 0)
        {
            printf("is negative\n");
        }
        else
        {
            printf("is positive\n");
        }
    }
}
