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
if (name == NULL || owner == NULL)
{
return (NULL);
}
dog_t *x = (dog_t *)malloc(sizeof(dog_t)); 
x->name = strdup(name);
x->owner = strdup(owner);
x->age = age;
if (x->name == NULL || x->owner == NULL)
{
free(x->name);
free(x->owner);
free(x);
return (NULL);
}
return (x);
}
