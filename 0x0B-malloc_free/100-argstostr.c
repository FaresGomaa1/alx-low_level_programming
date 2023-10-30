#include "main.h"

/**
* argstostr - concatenates all the arguments of the program.
* @ac: argument count.
* @av: pointer to array of arguments.
* Return: pointer to the new string.
*/
char *argstostr(int ac, char **av)
{
char *str, *begin;
int len = 0, i, j;

if (ac == 0 || !av)
	return (NULL);

for (i = 0; i < ac; i++)
{
	j = 0;
	while (av[i][j])
	{
		len++;
		j++;
	}
	len++;
}

str = malloc(len + 1);
if (!str)
	return (NULL);

begin = str;

for (i = 0; i < ac; i++)
{
	j = 0;
	while (av[i][j])
	{
		*str = av[i][j];
		str++;
		j++;
	}
	*str = '\n';
	str++;
}
*str = '\0';

return (begin);
}
