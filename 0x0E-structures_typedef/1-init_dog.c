#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - a function to initialize vars
 * @d: stuct to pointer
 * @name: char to pointer
 * @age: float
 * @owner: char to pointer
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
strncpy(d->name, name, sizeof(d->name) -1);
d->name[sizeof(d->name) -1] = '\0';
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) -1);
d->owner[sizeof(d->owner) -1] = '\0';
}
