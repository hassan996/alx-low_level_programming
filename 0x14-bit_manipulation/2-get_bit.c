#include "main.h"

/**
 * get_bit - function returns value of bit at given index
 * Return:value of bit at index index or -1
 * @n: number containing the bit.
 * @index: index of the bit to get.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
