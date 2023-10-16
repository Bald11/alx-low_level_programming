#include "main.h"

/**
 * swap_int - swaping to integer pointers
 * @a: integer pointer
 * @b: integer pointer as well
 * Return: void
 */

void swap_int(int *a, int *b)
{
int x, y;
x = *b;
y = *a;
*a = x;
*b = y;
}
