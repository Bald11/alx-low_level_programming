#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - main entry point
 * @array: integer to pointer
 * @size: size_t
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
int j;
if (!array || !size || !action)
return;
for (i = 0; i < size; i++)
{
j = array[i];
action(j);
}
}
