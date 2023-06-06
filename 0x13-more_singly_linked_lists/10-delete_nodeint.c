#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer
 * @index: index of the node
 * Return: 1 0r -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(n);
		return (1);
	}
	while (i < index - 1)
	{
		if (!n || !(n->next))
			return (-1);
		n = n->next;
		i++;
	}
	current = n->next;
	n->next = current->next;
	free(current);

	return (1);
}
