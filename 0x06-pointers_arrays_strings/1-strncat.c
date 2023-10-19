#include "main.h"
#include <string.h>

/**
 * _strncat - combines two string with maximum number of characters
 * @dest: char pointer
 * @src: char pointer
 * @n: integer
 * Return: returns a combined string
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
} 
