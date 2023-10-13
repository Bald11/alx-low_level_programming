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
if(counter == 10) counter = 0, counterofcounter++, printf("\n");
else if(counter == 9)
{
printf("%d", counter * counterofcounter);
counter++;
}
else
{
printf("%d, ", counter * counterofcounter);
counter++;
}
i++;
}
}
