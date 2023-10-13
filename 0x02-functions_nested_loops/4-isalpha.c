#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a character is lowercase.
 *
 * @c : a character
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _isalpha(int c)
{
  if (isalpha(c))
    return (1);
  else
    return (0);
}





