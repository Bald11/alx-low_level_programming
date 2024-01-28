#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _pow - Calculates the power of a given base raised to the given exponent.
 * @base: The base number.
 * @exponent: The exponent.
 *
 * Return: The result of base raised to the power of exponent.
 */
unsigned long int _pow(unsigned int base, unsigned int exponent)
{
unsigned long int result;
unsigned int i;
result = 1;
for (i = 1; i <= exponent; i++)
{
result *= base;
}
return (result);
}

/**
 * ContainAlpha - checks for any alphabetic characters
 * @b: the passed string
 * Return: 1 if a character is found else 0
 */

int ContainAlpha(const char *b)
{
while (*b)
{
if (isalpha(*b))
{
return (1);
}
b++;
}
return (0);
}

/**
 * IsNotOneOrZero - checks for the numbers 1 and 0 in *b
 * @b: the passed string
 * Return: 1 if it doesn't contain 1 and 0, else 0
 */

int IsNotOneOrZero(const char *b)
{
while (*b)
{
if (*b != '1' && *b != '0')
{
return (1);
}
b++;
}
return (0);
}

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: const char to pointer
 * Return: returns 0 if theres a char in string b else the result
 */

unsigned int binary_to_uint(const char *b)
{
size_t i;
size_t k;
size_t strLength = strlen(b);
int *max_value = (int *)malloc(strLength * sizeof(int));
int *intArray = (int *)malloc(strLength * sizeof(int));
int index = 0;
int j;
unsigned int absolute_result = 0;
double result;
if (b == NULL || ContainAlpha(b) == 1 || IsNotOneOrZero(b) == 1)
{
free(max_value);
free(intArray);
return (0);
}
for (i = 0; i < strLength; i++)
{
intArray[i] = b[i] - '0';
}
for (j = strLength - 1; j > -1; j--)
{
max_value[index] = intArray[j];
index++;
}
for (k = 0; k < strLength; k++)
{
if (max_value[k] == 0)
{
continue;
}
result = _pow(2, k);
absolute_result = absolute_result + (int)result;
}
free(intArray);
free(max_value);
return (absolute_result);
}
