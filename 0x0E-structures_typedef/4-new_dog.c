#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - main entry point
 * @name: char to pointer
 * @age: float
 * @owner: char to pointer
 * Return: depends
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x = (dog_t *)malloc(sizeof(dog_t));
if (x == NULL)
{
return (NULL);
}
x->name = strdup(name);
x->owner = strdup(owner);
if (x->name == NULL || x->owner == NULL)
{
free(x->name);
free(x->owner);
free(x);
return (NULL);
}
x->age = age;
return (x);
}
