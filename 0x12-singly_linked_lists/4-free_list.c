#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: list
 */
void free_list(list_t *head)
{
list_t *s;

while (head)
{
s = head->next;
free(head->str);
free(head);
head = s;
}
}
