#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *ptr;

	(void)argc;

	for (ptr = argv[0]; *ptr; ptr++)
	{
		_putchar(*ptr);
	}
	_putchar('\n');

	return (0);
}
