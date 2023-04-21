#include "variadic_functions.h"

/**
 * print_numbers - function print nums
 * @separator:separate btwn nums
 * @n:number of arg ar passed to func
 * @...:reste of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
