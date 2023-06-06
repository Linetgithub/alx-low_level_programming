#include "lists.h"
#include <stdlib.h>

/**
 * add-nodeint_end - addsa node
 * @head: pointer
 * @n: data
 * Return: pointer to new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *i = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (i->next)
		i = i->next;
	i->next = new;
	return (new);
}
