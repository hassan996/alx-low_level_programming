#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - let dogs run
 * @d:the chosen dog
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
