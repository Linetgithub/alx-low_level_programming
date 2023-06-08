#include "main.h"

/**
 * get_bit - returns value of a bit
 * @n: number
 * @index: index
 * Return: valu
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index & 1);
	return (i);
}
