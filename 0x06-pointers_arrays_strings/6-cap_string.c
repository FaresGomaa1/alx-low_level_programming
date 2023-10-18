#include "main.h"

/**
* is_separator - Checks if a character is a separator.
* @c: The character to check.
*
* Return: 1 if the character is a separator, 0 otherwise.
*/
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (separators[i])
	{
		if (c == separators[i])
			return (1);
		i++;
	}
	return (0);
}

/**
* cap_string - Capitalizes all words of a string.
* @s: The string to modify.
*
* Return: Pointer to the modified string.
*/
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	while (s[i])
	{
		if (is_separator(s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
