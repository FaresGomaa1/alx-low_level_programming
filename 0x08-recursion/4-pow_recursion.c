#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The power to raise x to.
 *
 * Return: The value of x raised to the power of y.
 *         -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
