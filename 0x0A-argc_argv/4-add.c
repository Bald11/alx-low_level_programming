#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * isAlphabeticString - check if it's alphabetic
 * @str: constant char to pointer
 * Return: value
 */

int isAlphabeticString(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - the main function
 * @argc: integer
 * @argv: char to pointer
 * Return: return 0
 */

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
}
else
{
int count = 1;
int result = 0;
while (count < argc)
{
if (!isAlphabeticString(argv[count]))
{
printf("Error\n");
return (1);
}
result = result + atoi(argv[count]);
count++;
}
printf("%d\n", result);
}
return (0);
}
