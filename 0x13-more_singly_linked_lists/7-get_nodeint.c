#include "lists.h"

/**
 * get_nodeint_at_index - returns the node in a linked list
 * @head:first node
 * @index: index of the node
 * Return: pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *n = head;

	while (n && i < index)
	{
		n = n->next;
		i++;
	}
	return (n);
}
