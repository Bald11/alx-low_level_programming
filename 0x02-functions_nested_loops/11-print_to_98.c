#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints number all the way to 98
 *
 * @n: number passed
 *
 * Return: void
 */

void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
n--;
}
}
else
{
while (n < 99)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
n++;
}
}
printf("\n");
}
