#include <string.h>

/**
 * _strncpy - copies a portion of a string into another string
 * @dest: char pointer, the destination of the string
 * @src: char pointer, the source to copy the string from
 * @n: integer, maximum character to copy
 * Return: returns the string
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
