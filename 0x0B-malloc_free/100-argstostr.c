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
	int i, j, z = 0, ln = ac;
	char *conc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ln++;
		}
	}
	conc = malloc(sizeof(char) * ln + 1);
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conc[z++] = av[i][j];
		}
		conc[z++] = '\n';
	}
	conc[z] = '\0';
	return (conc);
}
