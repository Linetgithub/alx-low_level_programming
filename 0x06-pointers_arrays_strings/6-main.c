#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char str[] = "the best. the worst. what comes.\n0123456hello world\thello world\n";
char *ptr;

ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
