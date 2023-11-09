#include <stdarg.h>

/**
 * sum_them_all - vardiadic function that sums up
 * passed arguments
 * @n: integer of how many args passed
 * Return: 0 if n == 0 else result
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int result;
va_list args;
int value;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; ++i)
{
value = va_arg(args, int);
result += value;
}
va_end(args);
return (result);
}
