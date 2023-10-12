#include "main.h"

/**
 * _isupper - checks if the character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}
