#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if the character is a digit 0-9
 * @c: integer passed
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
