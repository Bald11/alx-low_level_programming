#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

/*
void jack_bauer(void)
{
for (int i = 0; i < 24; i++)
{
for (int j = 0; j < 60; j++)
{
if (!isdigit(j) && !isdigit(i))
{
if (i < 10)
{
_putchar('0');
}
printf("%d", i);
_putchar(':');
if (j < 10)
{
_putchar('0');
}
printf("%d", j);
_putchar('\n');
}
}
}
}
*/

void jack_bauer(void)
{
int hours = 0;
while (hours < 24)
{
int minutes = 0;
while (minutes < 60)
{
printf("%02d:%02d\n", hours, minutes);
minutes++;
}
hours++;
}
}
