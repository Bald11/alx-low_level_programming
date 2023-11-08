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
int (*calculate)(int, int) = get_op_func(argv[2]);
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
int result = calculate(num1, num2);
if (argc == 4)
{
printf("%d\n", result);
}
else if (argc > 4 || argc < 4)
{
printf("Error\n");
}
return (0);
}
