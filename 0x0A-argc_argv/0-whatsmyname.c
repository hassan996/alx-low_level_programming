#include <stdio.h>
/**
 * main - this fun prints its name, followed by a new line
 * @argc: count line command argument
 * @argv:contain arg in line command
 * Return: 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	printf("%s \n", *argv);
	return (0);
}
