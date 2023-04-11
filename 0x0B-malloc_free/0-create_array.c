#include "main.h"
#include <stdlib.h>

/**
 *create_array - function creat char array
 * and initializ it with spesifique chars
 * @size:size of array
 * @c:specifique char
 *
 * Return:if size 0 or fiald return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	while (size > i)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}


