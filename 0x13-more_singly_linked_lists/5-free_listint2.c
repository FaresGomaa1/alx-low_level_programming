#include "lists.h"

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: pointer to a pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

*head = NULL;
}
