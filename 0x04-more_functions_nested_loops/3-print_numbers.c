#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * Return: void
 */

void print_numbers(void)
{
int x = 0;
while (x < 10)
{
_putchar(x + '0');
x++;
}
_putchar('\n');
}
