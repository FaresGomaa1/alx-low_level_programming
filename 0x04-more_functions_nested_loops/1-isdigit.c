#include "main.h"

/**
 * _isdigit - check if a number is a digit from 0 to 9 or not.
 * @c: the character to check.
 *
 * Return: 1 if c is a number from 0 to 9, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
