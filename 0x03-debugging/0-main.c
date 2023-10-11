#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void positive_or_negative(int n);

/**
 * main - Tests function positive_or_negative with a value of 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 0;
    positive_or_negative(n);
    return (0);
}

void positive_or_negative(int n)
{
    printf("%d ", n); /* Print the number followed by a space */

    if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        if (n < 0)
        {
            printf("is negative\n");
        }
        else
        {
            printf("is positive\n");
        }
    }
}
