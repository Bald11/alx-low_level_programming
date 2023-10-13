#include "main.h"

/**
 * _islower - check if a character is lowercase.
 *
 * @c : a character
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
if (islower(c))
  return (1);
else
  return (0);
}
