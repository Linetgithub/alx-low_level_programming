#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: lists
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
