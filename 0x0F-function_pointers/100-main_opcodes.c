#include <stdio.h>
#include <stdlib.h>

/**
 * main - func for display opcodes of itself
 * @argc:number of arguments
 * @argv:array pointers to arg
 *
 * Return:0.
 */
int main(int argc, char *argv[])
{
	int x, i;
	int (*addr)(int, char **) = main;
	unsigned char oc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		oc = *(unsigned char *)addr;
		printf("%.2x", oc);

		if (i == x - 1)
			continue;
		printf(" ");

		addr++;
	}

	printf("\n");

	return (0);
}
