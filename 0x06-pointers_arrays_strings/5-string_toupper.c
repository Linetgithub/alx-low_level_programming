#include "main.h"

/**
 * string_touper - changes lowercase to uppercase
 * @n: pointer
 * Return: A pointer to the changed string
 */
char *string_touper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}

