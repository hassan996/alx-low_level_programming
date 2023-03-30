#include "main.h"

/**
 * _strncat - function of strncat
 * @dest: string to be appended upon.
 * @src: string to be appended to dest.
 * @n: number of bytes from src to be appended to dest.
 *
 * Return: pointer to result string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
