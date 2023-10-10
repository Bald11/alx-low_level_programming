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
putchar(ch);
count++;
ch++;
}
putchar(newline);
return (0);
}
