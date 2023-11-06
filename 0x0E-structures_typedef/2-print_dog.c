#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints out dogtag
 * @d: structure to pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
if (d->name != NULL)
{
printf("%s\n", d->name);
}
else
{
printf("(nil)\n");
}
printf("Age: ");

printf("%f\n", d->age);

printf("Owner: ");
if (d->owner != NULL)
{
printf("%s\n", d->owner);
}
else
{
printf("(nil)\n");
}
}
}
