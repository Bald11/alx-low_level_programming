#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that outputs a reversed the input
 * @s: a character
 * Return: void
 */

void print_rev(char *s)
{
int x = strlen(s);
while (x > 0)
{
printf("%c", s[x-1]);
x--;
}
printf("\n");
}
