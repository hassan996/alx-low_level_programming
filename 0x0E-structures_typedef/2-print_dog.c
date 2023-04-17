#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - print variable on struct dog or nil if null
 *@d:pointer to struct dog
 *Return:return nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

		if ((*d).name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		if ((*d).age < 0)
			printf("Age: (nill)\n");
		else
			printf("Age: %s\n", d->age);
		if ((*d).owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
}
