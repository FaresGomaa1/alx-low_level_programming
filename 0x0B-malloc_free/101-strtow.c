#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count words separated by spaces in a string.
 * @str: The string to scan.
 * Return: The number of words in string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string.
 * Return: Pointer to an array of words.
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i = 0, j = 0, k = 0, len = 0, word_count;

	if (!str || !*str)
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		len = 0;
		if (str[i] && str[i] != ' ')
		{
			while (str[i + len] && str[i + len] != ' ')
				len++;
			words[j] = malloc((len + 1) * sizeof(char));
			if (!words[j])
			{
				while (--j >= 0)
					free(words[j]);
				free(words);
				return (NULL);
			}
			k = 0;
			while (str[i] && str[i] != ' ')
				words[j][k++] = str[i++];
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
