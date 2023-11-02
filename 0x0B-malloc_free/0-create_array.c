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
retrun (NULL);
}
else
{
char *array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
else
{
unsigned int i;
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
}
return (array);
}
