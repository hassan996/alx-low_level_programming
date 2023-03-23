#include "main.h"

/**
 * print_numbers - it will print numbesr from 0 to 9
 * Return: it will return numbers
 */
void print_numbers(void)
{
       	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
