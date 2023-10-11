#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			/* For numbers other than the first, print a comma before them */
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* If the result is a single digit and not the first number */
			if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			/* For numbers 10 and above */
			else if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			/* For the first number in the row */
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
