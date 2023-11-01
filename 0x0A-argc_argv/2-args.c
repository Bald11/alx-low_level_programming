#include <stdio.h>

/**
 * main - the main function
 * @argc: integer
 * @argv: char to pointer
 * Return: return 0
 */

int main(int argc, char *argv[])
{
int count = 0;
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
return (0);
}
