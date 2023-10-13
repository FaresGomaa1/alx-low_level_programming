#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 2, next = 0;
	long int sum = second;

	while (1)
	{
		next = first + second;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		first = second;
		second = next;
	}

	printf("%ld\n", sum);

	return (0);
}
