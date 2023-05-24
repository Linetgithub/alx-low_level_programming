#include “function_pointers.h”
#include <stdio.h>
/**
* Print_name - print name using pointer
* @name: string to add
* @f: pointer to function
* Return: nothing
*/
Void print_name(char *name, void (*f)(char *))
{
If(name == NULL || f == NULL)
return;
f(name);
}
