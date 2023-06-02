#include "lists.h"
#include <stdlib.h>

/**
 * list_len - lists the number of comments
 * @h: pointer
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
