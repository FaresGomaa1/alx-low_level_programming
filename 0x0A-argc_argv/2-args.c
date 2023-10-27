#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i])
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
	_putchar('\n');
	}

	return (0);
}
