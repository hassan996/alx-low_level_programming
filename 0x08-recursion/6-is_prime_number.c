#include "main.h"
int prime_num(int n, int m);

/**
 *is_prime_number -function that returns 1
 *if input is prime
 *@n:arg of func integer
 *Rerturn:1 if prime or 0 false
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 *prime_num - functin test if n prime
 *@n:tested num
 *@m:num iterator
 *Return: treu return 1, false 0
 */
int prime_num(int n, int m)
{
	if (m == 1)
		return (1);
	else if (n % m == 0 && m > 0)
		return (0);
	return (prime_num(n, m - 1));
}
