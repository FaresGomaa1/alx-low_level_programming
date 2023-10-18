#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string.
 * @src: the source string to append to dest.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *orig_dest = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (orig_dest);
}
