#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 * Return:freed number
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_t i;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = (*h)->next;
		free(*h);
		*h = i;
		n++;
	}
	else
	{
		free(*h);
		*h = NULL;
		n++;
		break;
	}
	*h = NULL;
	return (n);
}


