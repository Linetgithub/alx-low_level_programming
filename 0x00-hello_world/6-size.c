#include <stdio.h>
/**
 * main - A progrsm thst prints the size of various computer types
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of along int: %lu byte(s)\n", (unsigned long)sizeof(C));
printf("Size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
