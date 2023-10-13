#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			print_fizzbuzz();
		else if (i % 3 == 0)
			print_fizz();
		else if (i % 5 == 0)
			print_buzz();
		else
			print_number(i);

		if (i != 100)
			_putchar(' ');
		else
			_putchar('\n');
	}

	return (0);
}

/**
* print_fizz - Print Fizz to the stdout
*
* Return: void
*/
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
* print_buzz - Print Buzz to the stdout
*
* Return: void
*/
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

/**
* print_fizzbuzz - Print FizzBuzz to the stdout
*
* Return: void
*/
void print_fizzbuzz(void)
{
	print_fizz();
	print_buzz();
}

/**
* print_number - Prints an integer.
* @n: The integer.
*/
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		if (n / 10)
			print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
