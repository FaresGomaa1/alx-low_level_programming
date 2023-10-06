#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to the variable n each time
 * it's executed. Prints whether the number stored in variable n is
 * positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

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

	return (0);
}
