#include <stdio.h>

/**
 * print_it - print it before main
 */
void __attribute__((constructor)) print_it(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}

