#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First input number as a string
 * @n2: Second input number as a string
 * @r: Buffer to store result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, m, n, carry = 0;

	while (n1[i])
		i++;
	while (n2[j])
		j++;

	if (i + 2 > size_r || j + 2 > size_r)
		return (0);

	m = i - 1;
	n = j - 1;
	for (k = 0; k < size_r - 1; k++, m--, n--)
	{
		if (m >= 0)
			carry += n1[m] - '0';

		if (n >= 0)
			carry += n2[n] - '0';

		if (m < 0 && n < 0 && carry == 0)
		{
			break;
		}

		r[k] = (carry % 10) + '0';
		carry /= 10;
	}
	r[k] = '\0';
	for (k = k - 1; k >= l; k--, l++)
	{
		char tmp = r[k];

		r[k] = r[l];
		r[l] = tmp;
	}
	return (r);
}
