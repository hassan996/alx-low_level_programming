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
	int cent, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	while (cent != 0)
	{
		change++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", change);

	return (0);
}

