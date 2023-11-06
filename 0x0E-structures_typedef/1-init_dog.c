#include <stdio.h>
#include "dog.h"

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
d->name = name;
d->age = age;
d->owner = owner;
}
