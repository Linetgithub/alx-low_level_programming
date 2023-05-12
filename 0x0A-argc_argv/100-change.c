#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of coins to make change for amount of money
 * @argc: the number of arguments
 * @argv: An array of pointers
 * Return: if the number is not exactly one -1 otherwise -0
 *
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);

while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
printf("%d\n", coins);

return (0);
}

