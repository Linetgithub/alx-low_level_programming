#include "lists.h"
#include <stdlib.h>

/**
 * pop_instint - deletes
 * @head: pointer
 * Return: deleted data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *i;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;
	return (n);
}
