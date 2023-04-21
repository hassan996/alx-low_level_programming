#include "variadic_functions.h"

/**
 * print_strings - function print string
 * @separator:spearated btwn strings
 * @n:numbers of arg passed to func
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *s;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(li, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
