#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the strings to integers using atoi function */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
