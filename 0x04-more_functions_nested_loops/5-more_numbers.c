#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 teen times
 */
void more_numbers(void)
{
	int n, i;

	n = 0;
	while (n < 14)
	{
		n++;
		for (i = 0; i < 15; i++)
		{
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
