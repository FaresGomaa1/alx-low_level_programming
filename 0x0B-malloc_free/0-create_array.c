#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a char.
 * @size: Size of the array to be created.
 * @c: Character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails or size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
