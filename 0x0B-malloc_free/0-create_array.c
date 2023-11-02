#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: integer
 * @c: char
 * Return: NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *array;
unsigned int i;
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
return (array);
}
