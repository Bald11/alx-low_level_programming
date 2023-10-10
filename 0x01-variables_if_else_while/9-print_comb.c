#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int newline = '\n';
int space = ' ';
int semicolon = ',';
int counter = 0;
int num = '0';
while (counter < 10)
{
putchar(num);
if (counter == 9)
{
num++;
counter++;
}
else
{
putchar(semicolon);
putchar(space);
num++;
counter++;
}
}
putchar(newline);
return (0);
}
