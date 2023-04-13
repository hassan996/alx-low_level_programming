#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1:pointer to mem contain string 1
 * @s2:pointer to mem contain strin 2
 * @n:number of byets s2 that we need
 * Return:NULL or string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = n;
	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	conc = malloc((len + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		conc[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		conc[len++] = s2[i];
	}
	conc[len] = '\0';

	return (conc);
}

