#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char num = '0';
int counter = 0;
while (counter < 10)
{
putchar(num);
num++;
counter++;
}
printf("\n");
return (0);
}
