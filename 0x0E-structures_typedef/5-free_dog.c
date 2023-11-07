#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * @d: structure to pointer
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
