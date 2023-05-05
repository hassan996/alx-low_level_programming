#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *) &x;
	
	if (*ch)
		return 1;
	else
		return 0;
}
