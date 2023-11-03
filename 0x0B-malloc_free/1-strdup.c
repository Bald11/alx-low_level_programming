#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: char to pointer
 * Return: NULL if it fails
 */

char *_strdup(char *str)
{
char *string;
unsigned int size = strlen(str) + 1;
if (str == NULL)
{
return (NULL);
}
string = (char *)malloc(sizeof(char) * size);
strcpy(string, str);
if (string == NULL)
{
return (NULL);
}
return (string);
}
