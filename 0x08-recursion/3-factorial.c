#include "main.h"
/**
 *factorial - function that returns factorial of a given number
 *@n:contain number
 *Return: return -1 if less 0
 *        or 1 if equale 0 or 1
 *        or n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
