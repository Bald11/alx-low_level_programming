#include <math.h>

/**
 * _pow_recursion - raise a number to a specified power
 * @x: integer
 * @y: integer
 * Return: -1 if y is less than 0 else return the result of pow
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
