#include "main.h"

/**
 * print_sign - Determines if the input number
 * is greater than, equal to, or less than zero.
 *
 * @n: the input number as an integer.
 *
 * Return: 1 if positive, -1 if negative, 0 if zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
