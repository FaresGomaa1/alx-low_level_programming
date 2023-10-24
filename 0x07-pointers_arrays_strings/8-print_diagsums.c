#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int main_diag = 0, secondary_diag = 0;

	for (i = 0; i < size; i++)
	{
		main_diag += a[i * (size + 1)];
		secondary_diag += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", main_diag, secondary_diag);
}
