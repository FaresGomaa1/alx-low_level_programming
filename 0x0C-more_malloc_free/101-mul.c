#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiply two positive numbers
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
	printf("Error\n");
	return (98);
}

char *num1 = argv[1];
char *num2 = argv[2];

if (!is_positive_integer(num1) || !is_positive_integer(num2))
{
	printf("Error\n");
	return (98);
}

char *result = multiply(num1, num2);

if (result == NULL)
{
	printf("Error\n");
	return (98);
}

printf("%s\n", result);
free(result);

return (0);
}

/**
* is_positive_integer - Check if a string consists of only digits
* @str: The string to check
*
* Return: 1 if it's a positive integer, 0 otherwise
*/
int is_positive_integer(char *str)
{
while (*str)
{
	if (*str < '0' || *str > '9')
		return (0);
	str++;
}
return (1);
}

/**
* multiply - Multiply two positive integer strings
* @num1: The first number as a string
* @num2: The second number as a string
*
* Return: The result of the multiplication as a string
*/
char *multiply(char *num1, char *num2)
{
/*
 * Your multiplication logic here
 *
 * Allocate and return the result as a string
 * You can use malloc to allocate memory for the result
 * Don't forget to null-terminate the result string
 *
 * Example: char *result = malloc(result_length + 1);
 * Fill in result and don't forget to add '\0' at the end
 *
 * Return the result
 */
return (result);
}
