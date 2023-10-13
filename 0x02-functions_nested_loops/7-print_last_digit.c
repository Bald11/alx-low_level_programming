#include <limits.h>
#include "main.h"

/**
 * print_last_digit - takes the last digit of a number
 *
 * @x: an integar
 *
 * Return: always x
 */

int print_last_digit(int x)
{
if (x < 0)
{
x = x * -1;
}
x = x % 10;
_putchar(x + '0');
return (x);
}
