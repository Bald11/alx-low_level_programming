#include <stdio.h>

/**
 * main - the main function
 * @argc: integer
 * @argv: char to pointer
 * Return: return 0
 */

int main(int argc, char *argv[])
{
if (argv[0])
{
printf("%d\n", argc - 1);
}
else
{
printf("%d\n", argc);
}
return (0);
}
