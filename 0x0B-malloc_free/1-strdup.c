#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 *            space in memory  which contains a copy
 *            of the string given as a parameter
 *@str: contain original string
 *Return: if failld NULL if succes string
 */
char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
		return (NULL);

	str2 = malloc(strlen(str) + 1);

	if (str2 == NULL)
		return (NULL);

	strcpy(str2, str);
	return (str2);
}

