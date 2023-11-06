#ifndef dog_h
#define dog_h

/**
 * struct dog - a dog structure
 * @name: char to pointer
 * @age: float
 * @owner: char to pointer
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog
{
char* name;
int age;
char *owner;
} dog_t;

#endif
