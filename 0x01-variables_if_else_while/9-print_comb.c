#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	char num = '0';

	for (num = '0'; num < '10'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
