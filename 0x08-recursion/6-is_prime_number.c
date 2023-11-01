#include <stdio.h>
#include <math.h>

/**
 * is_prime_recursive - Check if a number is prime using recursion.
 * @n: The number to be checked.
 * @i: The current divisor to test.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_recursive(int n, int i)
{
if (n <= 1)
return (0);

if (i == 1)
return (1);

if (n % i == 0)
return (0);

return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
if (n <= 3)
return (n > 1);

if (n % 2 == 0 || n % 3 == 0)
return (0);

return (is_prime_recursive(n, (int)sqrt(n)));
}
