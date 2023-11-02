#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory block to be allocated
 *
 * Return: Pointer to the allocated memory
 *         Exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
