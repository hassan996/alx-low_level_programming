#include "main.h"

/**
 * largest_number - returns big num of 3 numbers
 * @a: 1 int
 * @b: 2 int
 * @c: 3 int
 * Return: big
 */

int largest_number(int a, int b, int c)
{
	int big;

	if (a > b && a > c)
	{
		big = a;
	}
	else if (b > c)
	{
		big = b;
	}
	else
	{
		big = c;
	}

	return (big);
}
