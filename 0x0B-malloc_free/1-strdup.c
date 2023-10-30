#include "main.h"
/**
 * _strdup - duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: pointer to the newly allocated space in memory,
 *         which contains a copy of the string given as a parameter,
 *         or NULL if the function fails.
 */

char *_strdup(char *str)
{
	char *copied_arr;
	int arr_len, i;

	if (str == NULL)
		return (NULL);

	arr_len = 0;
	while (str[arr_len] != '\0')
		arr_len++;

	if (arr_len == 0)
		return (NULL);

	copied_arr = malloc(arr_len + 1);
	if (copied_arr == NULL)
		return (NULL);

	for (i = 0; i < arr_len; i++)
	copied_arr[i] = str[i];

	copied_arr[arr_len] = '\0';

	return (copied_arr);
}
