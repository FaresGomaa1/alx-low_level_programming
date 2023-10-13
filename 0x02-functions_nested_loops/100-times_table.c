#include "main.h"

/**
* print_formatted_product - prints the product in a formatted manner.
* @prod: The product to be printed.
* @j: Current iterator of the loop.
*/
void print_formatted_product(int prod, int j)
{
	if (j == 0)
	{
		_putchar(prod + '0');
	}
	else if (prod <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(prod + '0');
	}
	else if (prod <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(prod / 10 + '0');
		_putchar(prod % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(prod / 100 + '0');
		_putchar((prod / 10) % 10 + '0');
		_putchar(prod % 10 + '0');
	}
}

/**
* print_times_table - prints the n times table, starting with 0.
* @n: The input value.
*/
void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			print_formatted_product(prod, j);
		}
	_putchar('\n');
	}
}
