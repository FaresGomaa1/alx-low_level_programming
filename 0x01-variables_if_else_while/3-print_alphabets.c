#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase.
 *
 * Description: The program starts by printing lowercase alphabets
 * using a loop and then prints uppercase alphabets using another loop.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* For lowercase alphabets */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* For uppercase alphabets */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
