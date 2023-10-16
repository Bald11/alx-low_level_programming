#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - print out half of the passed string
 * @str: a string
 * Return: void
 */

void puts_half(char *str)
{
int x = 0;
int n = (strlen(str) - 1) / 2;
int y = n + 1;
while (x < y)
{
putchar(str[n]);
n++;
x++;
}
printf("\n");
}
