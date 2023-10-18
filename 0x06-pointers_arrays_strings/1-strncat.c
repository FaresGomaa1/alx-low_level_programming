#include "main.h"

/**
 * _strncat - Concatenate two strings up to n bytes.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;
	while (i < n && src[i])
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	if (i < n)
		dest[dest_len] = '\0';
	return (dest);
}

