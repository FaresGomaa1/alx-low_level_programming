#include "main.h"

/**
* print_number - prints an integer.
* @n: The integer to be printed.
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_neg(n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_pos(n);
	}
}

/**
* print_pos - recursively prints a positive integer.
* @n: The positive integer to be printed.
*/
void print_pos(int n)
{
	if (n / 10)
	{
		print_pos(n / 10);
	}

	_putchar((n % 10) + '0');
}

/**
* print_neg - recursively prints a negative integer without the sign.
* @n: The negative integer to be printed.
*/
void print_neg(int n)
{
	if (n / 10)
	{
		print_neg(n / 10);
	}

	_putchar('0' - (n % 10));
}
