#include "main.h"

/**
 * _strlen - return length of string 
 * @s: containd string
 * Return: return length of string
 */
int _strlen(char *s)
{
      	int length = 0;
       	int i = 0;

       	for (i = 0; s[i] != '\0'; i++)
       	{
	     	length++;
       	}
      	return length;
}
