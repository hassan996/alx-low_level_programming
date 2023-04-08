#include "main.h"
/**
 *_strspn - gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 * Return:  number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (count);
		}

		s++;
	}

	return (count);
}
