#include <stdio.h>

/**
 * _sqrt_recursive - Recursively searches for the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * Return: The square root of 'n' if found, or -1 if 'n' has no natural square root.
 */

int _sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of 'n' if it exists, or -1 if not.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_recursive(n, 1));
}
