#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: the number to be checked
 * Return: 1 if number is greater than zero
 * 0 if number is zero
 * -1 if number is less than zero
 */

int print_sign(int n);
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf(0);
		return (0);
	}

}
