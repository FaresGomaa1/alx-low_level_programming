#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to take from s2
 *
 * Return: Pointer to the newly allocated concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
unsigned int len_s1 = 0, len_s2 = 0, i;
unsigned int total_length = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[len_s1])
	len_s1++;
while (s2[len_s2])
	len_s2++;

if (n >= len_s2)
	n = len_s2;

total_length = len_s1 + n;
concatenated = malloc(total_length + 1);

if (concatenated == NULL)
	return (NULL);

for (i = 0; i < len_s1; i++)
	concatenated[i] = s1[i;
for (; i < total_length; i++)
	concatenated[i] = s2[i - len_s1];
concatenated[total_length] = '\0';

return (concatenated);
}
