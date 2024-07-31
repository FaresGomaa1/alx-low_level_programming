#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
* Return: The first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

size_t step = sqrt(size); /* Jump step size */
size_t prev = 0;
size_t curr = 0;

/* Jump in steps */
while (curr < size && array[curr] < value)
{
printf("Value checked array[%zu] = [%d]\n", curr, array[curr]);
prev = curr;
curr += step;
if (curr >= size)
curr = size - 1; /* Ensure curr doesn't go out of bounds */
}

printf("Value found between indexes [%zu] and [%zu]\n", prev, curr);

/* Linear search within the block */
for (size_t i = prev; i <= curr; i++)
{
printf("Value checked array[%zu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
