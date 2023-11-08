#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies a with b
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - devides a by b
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - the remaining of the devision of a / b
 * @a: integer
 * @b: integer
 * Return: result
 */

int op_mod(int a, int b)
{
return (a % b);
}
