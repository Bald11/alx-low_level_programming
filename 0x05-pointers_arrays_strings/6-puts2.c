#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: the passed string
 * Return: void
 */

void puts2(char *str)
{
int x = 0;
while (x < strlen(str))
{
printf("%c", str[x]);
x += 2;
}
printf("\n");
}
