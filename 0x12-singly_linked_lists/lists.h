#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
* struct list_s - Singly linked list structure
* @str: String (malloc'ed string)
* @len: Length of the string
* @next: Points to the next node
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* Task 0 - Print elements of a linked list */
size_t print_list(const list_t *h);

/* Task 1 - Return the number of elements in a linked list */
size_t list_len(const list_t *h);

/* Task 2 - Add a new node at the beginning of a list */
list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);
#endif /* LISTS_H */
