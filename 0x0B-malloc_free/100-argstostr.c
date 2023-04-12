#include "main.h"
#include <stdlib.h>

/**
 *argstostr - function that concatenates all the arguments
 *@ac:argument that count arg
 *@av:pointer to arry that hold args
 *Return: NULL or conc
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, z, ln = 0;
	char *conc;

	if (ac == NULL || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ln += 1
		}
	}
	conc = malloc((ln + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	for (i = 0, z = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
		{
			conc[k] = av[i][j];
		}
		conc[k++] = '\n';
	}
	conc[k] = '\n';
	return (conc);
}
