#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - main entry point of the function
 * @array: integer
 * @size: integer
 * @cmp: function pointer
 * Return: value of j else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;
if (!array || !size || !cmp)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
else
{
result = -1;
}
}
return (result);
}
