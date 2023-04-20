#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - for display operation reslut
 * @argc:number of arg
 * @argv: array of pointer to arg
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *sym;

	if (argc > 4 )
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	sym = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(sym) == NULL || sym[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if (*sym == '/' && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (*sym == '%' && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(sym)(a, b));
	return (0);
}
