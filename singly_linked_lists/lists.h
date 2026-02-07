#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - singly linked list node
 * @str: string stored in the node
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: This struct represents a node of a singly
 * linked list, storing a string and its length.
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
