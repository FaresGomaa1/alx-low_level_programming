#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

		count++;
	}
}
