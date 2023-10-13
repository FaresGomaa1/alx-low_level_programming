#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	long number = 612852475143;
	long max_prime = -1;
	long div = 3;

	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	while (number > 1)
	{
		while (number % div == 0)
		{
			max_prime = div;
			number /= div;
		}
		div += 2;
	}

	printf("%ld\n", max_prime);

	return (0);
}
