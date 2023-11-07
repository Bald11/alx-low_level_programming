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
dog_t *x;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
x = malloc(sizeof(dog_t));
if (x == NULL)
{
return (NULL);
}   
x->name = malloc(sizeof(char) * (len1 + 1));
if (x->name == NULL)
{
free(x);
return (NULL);
}
x->owner = malloc(sizeof(char) * (len2 + 1));
if (x->owner == NULL)
{
free(x);
free(x->name);
return (NULL);
}
strcpy(x->name, name);
strcpy(x->owner, owner);
x->age = age;
return (x);
}
