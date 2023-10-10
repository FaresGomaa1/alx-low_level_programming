#include "main.h"
/**
 * main - Entry point for the program
 * Description: Uses _putchar to print a string
 * Return: 0 if successful
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
