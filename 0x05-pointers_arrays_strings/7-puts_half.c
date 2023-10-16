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
int n = strlen(str) / 2;
int y = n;
while (x <= y)
{
printf("%c", str[n]);
n++;
x++;
}
printf("\n");
}
