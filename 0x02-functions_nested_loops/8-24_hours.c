#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Return: void
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
