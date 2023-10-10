#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */

int main(void)
{
char ch = 'a';
char newline = '\n';
int count = 0;
while (count < 26)
{
if (ch == 'e' || ch == 'q')
{
count++;
ch++;
continue;
}
else
{
putchar(ch);
count++;
ch++;
}
}
putchar(newline);
return (0);
}
