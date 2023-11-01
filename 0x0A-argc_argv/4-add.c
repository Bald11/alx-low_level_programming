#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * isAlphabeticString - check if it's alphabetic
 * @str: constant char to pointer
 * Return: value
 */

int isAlphabeticString(const char *str)
{
if (*str == '\0')
{
return (1);
}
else if (!isalpha((unsigned char)*str))
{
return (0);
}
else
{
return (isAlphabeticString(str + 1));
}
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
if (isAlphabeticString(argv[count]))
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
