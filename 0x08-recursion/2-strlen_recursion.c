#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s:pointer contain
 *Return: return lenght
 */
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		ln = 1 + _strlen_recursion(s + 1);
		return (ln);
	}
}
