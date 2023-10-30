#include "main.h"

/**
 * _strdup - duplicates a string.
 * @str: string to be duplicated.
 * Return: pointer to the duplicated string or NULL if failed.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	if (!str)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	duplicate = malloc((len + 1) * sizeof(char));
	if (!duplicate)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
