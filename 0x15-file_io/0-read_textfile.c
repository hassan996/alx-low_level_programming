#include "main.h"

/**
 * read_textfile - function reads text file and prints it
 * to the POSIX standard output.
 * @filename:pointer to name of file
 * @letters:number of letters te func sould read and pirnt
 * Return: 0 or num of byte func sould read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t op, rd, wr;
	char *tab;

	if (filename == NULL)
		return (0);

	tab = malloc(sizeof(tab) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(o, tab, letters);
	wr = write(STDOUT_FILENO, tab, r);

	if (op == -1 || rd == -1 || wr != r)
	{
		free(tab);
		return (0);
	}
	free(tab);
	close(op);
	return (wr);
}
