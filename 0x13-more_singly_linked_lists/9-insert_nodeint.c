#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the head of the list
* @idx: index where the new node should be added
* @n: value to be stored in the new node
*
* Return: (new_node) on success, (NULL) on failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (i = 0; i < idx - 1 && temp != NULL; i++)
{
temp = temp->next;
}

if (temp == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
