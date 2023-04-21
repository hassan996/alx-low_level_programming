#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n:number args all passed to func
 *@...:rset of args
 *Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list li;

	if (n == 0)
		return (0);

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(li, int);
	}
	va_end(li);

	return (total);
}
