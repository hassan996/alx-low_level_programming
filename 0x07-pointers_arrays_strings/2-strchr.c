#include "main.h" 
/**
 *
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	while (i != '\0')
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
