#include "main.h"

/**
* puts_half - Prints the second half of a string.
* @str: The string to be printed.
*/
void puts_half(char *str)
{
	int i = 0, start;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		start = i / 2;
	}
	else
	{
		start = (i + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
