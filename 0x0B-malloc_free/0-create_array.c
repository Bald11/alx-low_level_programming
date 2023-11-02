#include <stdlib.h>

/**
 * create_array - 
 * @size:
 * @c:
 * Return:
 */

char *create_array(unsigned int size, char c)
{
return (malloc(size * sizeof(char)));
}
