#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse;
 * @s: string pointer
 * Return: void
 */

void _print_rev_recursion(char *s)
{
for (int i = 14; i > 0; i--)
{  
printf("%c", s[i - 1]);
}    
}
