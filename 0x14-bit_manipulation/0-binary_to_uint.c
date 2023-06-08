#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: string
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int i = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{

		if (b[n] < '0' || b[n] > '1')
			return (0);
		i = 2 * i + (b[n] - '0');
	}
	return (i);
}
