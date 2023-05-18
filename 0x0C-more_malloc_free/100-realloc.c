#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Main Entry
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 * Return: ...
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		nptr[i] = oldp[i];
	free(ptr);
	return (nptr);
}
