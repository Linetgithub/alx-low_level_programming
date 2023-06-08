#include "main.h"

/**
 * flip_bits- counts the number of bits
 * @n: first number
 * @m: second number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
			count++;
	}
	return (count);
}
