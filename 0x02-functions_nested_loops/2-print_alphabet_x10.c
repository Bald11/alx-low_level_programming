#include "main.h"

/**
 * print_alphabet - Print the lowercase alphabet from 'a' to 'z', 10 times.
 */

void print_alphabet_x10(void)
{
char c;
int i = 0;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}


