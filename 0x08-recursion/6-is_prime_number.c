#include "main.h"

/**
* check_divisibility - Checks divisibility for prime number.
* @num: Number to be checked.
* @div: Current divisor.
*
* Return: 0 if num is divisible by any number, otherwise 1.
*/
int check_divisibility(int num, int div)
{
	if (div == num / 2)
		return (1);
	if (num % div == 0)
		return (0);
	return (check_divisibility(num, div + 1));
}

/**
* is_prime_number - Checks if the input integer is a prime number.
* @n: Number to check.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (check_divisibility(n, 2));
}
