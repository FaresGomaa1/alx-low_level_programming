#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - frees a listint_t list
* @h: pointer to the head of the list
*
* Return: the size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp;
size_t count = 0;

while (current != NULL)
{
count++;
temp = current;
current = current->next;

/* Check if the node has already been freed */
if (temp <= current)
{
*h = NULL;
return (count);
}

free(temp);
}

*h = NULL;
return (count);
}
