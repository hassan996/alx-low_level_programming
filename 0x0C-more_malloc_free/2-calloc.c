#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array
 *              usnig malloc
 *@nmemb:number of elements
 *@size:byte size for each element
 *Return: NULL or ptr to alloct memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	int i;
	char *ini;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(nmemb * size);

	if (call == NULL)
		return (NULL);


	ini = call;

	for (i = 0; i < nmemb; i++)
	{
		ini[i] = '\0';
	}
	return (call);
}
