#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i, j;
	int current_itiretor = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j <= 9; j++)
		{
			current_itiretor += i;
			_putchar(current_itiretor);
			_putchar(',');
			_putchar(' ');
		}
	}	_putchar('\n');
}
