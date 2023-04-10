#include <stdio.h>
#include <stdlib.h>

/**
 * main - function  the minimum number of coins
 * to make change.
 * @argc:count arg in cmd line
 * @argv:array pointer to arg
 * Return:0 if no number passed
 *  1 if arg is not digit
 */
int main(int argc, char *argv[])
{
	int cent, sum;
	int c = 0;
	int types[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	while (cent > 0 && c < sizeof(types) / sizeof(int))
	{
		if (cent >= types[c])
		{
			sum += cent / type[c];
			cent %= type[c];
		}
		c++;
	}
	printf("%d\n", coin);
	return (0);
}

