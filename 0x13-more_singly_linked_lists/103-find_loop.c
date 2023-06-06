#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: list
 * Return: source of the loop or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n = head;
	listint_t *i = head;

	if (!head)
		return (NULL);

	while (n && i && i->next)
	{
		i = i->next->next;
		n = n->next;

		if (i == n)
		{
			n = head;
			while (n != i)
			{
				n = n->next;
				i = i->next;
			}
			return (i);
		}
	}
	return (NULL);
}
