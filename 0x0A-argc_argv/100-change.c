#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - Prints the minimum number of coins to make change.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", get_coins(amount));

	return (0);
}

/**
* get_coins - Returns the minimum number of coins for an amount.
* @amount: The amount to make change for.
*
* Return: The minimum number of coins.
*/
int get_coins(int amount)
{
	int coins = 0;

	while (amount >= 25)
	{
		coins++;
		amount -= 25;
	}

	while (amount >= 10)
	{
		coins++;
		amount -= 10;
	}

	while (amount >= 5)
	{
		coins++;
		amount -= 5;
	}

	while (amount >= 2)
	{
		coins++;
		amount -= 2;
	}

	while (amount >= 1)
	{
		coins++;
		amount -= 1;
	}

	return (coins);
}
