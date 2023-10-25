#include "main.h"

/**
* find_root - Find the square root recursively.
* @num: The number to find the square root of.
* @root: The current root to check.
*
* Return: The square root if found, -1 otherwise.
*/
int find_root(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root * root > num)
		return (-1);
	return (find_root(num, root + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
*
* Return: The natural square root, or -1 if none.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 1));
}
