#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s:pointer contain
 *Return: return lenght
 */
int _strlen_recursion(char *s)
{
	static int ln = 1;
	int len = 0;

	if (*s != '\0')
	{
		ln++;
		_strlen_recursion(s + 1);
	}
	len = ln - 1;
	return (len);
}
