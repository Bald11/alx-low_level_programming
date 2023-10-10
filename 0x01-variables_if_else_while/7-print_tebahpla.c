#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char num = 'z';
int newline = '\n';
int counter = 0;
while (counter < 26)
{
putchar(num);
num--;
counter++;
}
putchar(newline);
return (0);
}
