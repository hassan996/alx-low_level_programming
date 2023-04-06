#include "main.h"
int is_it_root(int n, int rn);
/**
 *_sqrt_recursion - function returns the natural
 *                   square root of a number
 *@n:number integer
 *Return:return -1 if @n no root have no root sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (is_it_root(n, 0));
}

/**
 *is_it_root - function return natural square...
 *@rn:number for check
 *@n:number integer
 *Return:return root square
 */
int is_it_root(int n, int rn)
{
	if (rn * rn > n)
		return (-1);
	else if (rn * rn == n)
		return (rn);
	return (is_it_root(n, rn + 1));
}

