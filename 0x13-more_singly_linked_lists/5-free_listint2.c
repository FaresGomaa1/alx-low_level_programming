#include "lists.h"

/**
* free_listint2 - frees a linked list and sets the head to NULL
* @head: pointer to a pointer to the head of the list
*/
void free_listint2(void **head)
{
void *temp;

while (*head != NULL)
{
temp = *head;
*head = ((listint_t *)*head)->next;
free(temp);
}
}
