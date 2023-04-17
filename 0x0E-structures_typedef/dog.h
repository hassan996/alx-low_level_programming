#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct contain info about dog
 * @name:string name of dog
 * @age:float age of dooog
 * @owner:string name dady dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - is new type of struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
