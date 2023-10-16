#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the passed string
 * Return: void
 */

void rev_string(char *s)
{
int len = strlen(s);
int x = 0;
int y = len - 1;
while (x < y)
{
char string = s[x];
s[x] = s[y];
s[y] = string;
x++;
y--;
}
}
