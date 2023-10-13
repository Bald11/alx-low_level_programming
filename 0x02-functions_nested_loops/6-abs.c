#include "main.h"
#include <stdlib.h>

/**
 * _abs - gives the absolute value
 *
 * @x - character
 *
 * Return - always 1
 */

int _abs(int x)
{
if (x < 0)
{
x = x * -1;
}
return (x);
}
