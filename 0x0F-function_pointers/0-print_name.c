#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function
 * @name: name to print
 * @f: function pointer to print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
	f(name);
}
}
