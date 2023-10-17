#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
int x = 0;
while (x < 10)
{
if (x == 2 || x == 4)
{
x++;
continue;
}
else
{
_putchar(x + '0');
x++;
}
}
_putchar('\n');
}
