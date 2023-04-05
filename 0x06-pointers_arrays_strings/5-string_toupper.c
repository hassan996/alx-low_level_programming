#include "main.h"

/**
 * string_toupper - fucntion replace lowercase
 *                  to uppercase
 * @str: string need changed.
 *
 * Return:  pointer to changed string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
