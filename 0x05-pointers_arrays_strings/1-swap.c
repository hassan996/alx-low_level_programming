#include "main.h"

/**
 * swap_int - function swap a to b 
 * @a: first variable 
 * @b: secode variable
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
