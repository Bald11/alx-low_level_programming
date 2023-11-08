#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main entry of the function
 * @name: char to pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
