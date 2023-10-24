#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to a pointer of char to be set.
 * @to: The pointer to char to set it to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
