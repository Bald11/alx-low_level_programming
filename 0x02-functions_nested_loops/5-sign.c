#include "main.h"
#include <ctype.h>

/**
 * print_sign - check if a character is lowercase.
 *
 * @n : a character
 *
 * Return: 1 if possitive, 0 if it equals 0, -1 if negative.
 */

int print_sign(int n)
{
  if (n > 0)
  {
    _putchar('+');
    return(1);
  }
  else if (n == 0)
  {
    _putchar('0');
    return (0);
  }
  else if (n < 0)
  {
    _putchar('-');
    return (-1);
  }
  return (0);
}
