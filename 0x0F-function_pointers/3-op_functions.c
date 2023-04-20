#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function calcul addition
 * @a:first arg
 * @b:second arg
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function calcul substraction
 *@a:first arg
 *@b:second arg
 *Return:result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function calcul multipl
 *@a:first arg
 *@b:second arg
 *Return:result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function calcul division
 * @a:first arg
 * @b:second arg
 * Return:result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - funcction calcul modulo
 * @a:first arg
 * @b:second arg
 * Return:result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
