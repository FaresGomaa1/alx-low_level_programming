#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
* struct list_s - A structure representing a singly linked list node
* @str: String data
* @len: Length of the string
* @next: Pointer to the next node in the list
*/
typedef struct list_s
{
char *str;
size_t len;
struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
