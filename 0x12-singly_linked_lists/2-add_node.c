#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding new node
 * @head: pointer
 * @str: string
 * Return: element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int i = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	n->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	n->len = i;
	if (*head != NULL)
		n->next = *head;
	if (*head == NULL)
		n->next = NULL;
	*head = n;
	return (*head);
}

