#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints from 0 to 15, 10 times
 * Return: void
 */

void more_numbers(void)
{
int x = 0;
int y = 0;
while (x < 10)
{
while (y < 15)
{
printf("%d", y);
y++;
}
printf("\n");
x++;
y = 0;
}
}
