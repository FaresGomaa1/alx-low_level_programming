#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char regular[] = "aeotlAEOTL";
	char leet_equiv[] = "43071";

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == regular[j] || s[i] == regular[j + 5])
				s[i] = leet_equiv[j];
		}
		i++;
	}

	return (s);
}
