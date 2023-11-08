#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main entry point
 * @argc: integer argument count
 * @argv: char to pointer argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
char i;
int (*calculate)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(69);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
calculate = get_op_func(argv[2]);
if (!calculate)
{
printf("Error\n");
exit(70);
}
i = *argv[2];
if ((i == '/' || i == '%') && num2 == 0)
{
printf("Error\n");
exit(71);
}
result = calculate(num1, num2);
printf("%d\n", result);
return (0);
}
