#include <stdio.h>
/**
 * main - this fun prints its name, followed by a new line
 * @argc: count line command argument
 * @argv:contain arg in line command
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
