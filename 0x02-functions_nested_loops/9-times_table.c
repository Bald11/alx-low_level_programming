#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
int i = 0;
int counter = 0;
int counterofcounter = 0;
while(i < 110)
{
int result = counter * counterofcounter;
if(counter == 10) counter = 0, counterofcounter++, printf("\n");
else if(counter == 9)
{
if(result < 10)
{
printf(" %d", result);
}
else
{
printf("%d", result);
}
counter++;
}
else
{
if(result < 10 && counter != 0)
{
printf(" %d, ", result);
}
else
{
printf("%d, ", result);
}
counter++;
}
i++;
}
}
