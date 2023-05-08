#include "main.h"

/**
 * create_file - function that creates a file.
 *  @filename: pointer to name of file
 *  @text_content: pointer to text
 *  Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	op = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}

