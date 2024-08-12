#include "main.h"

/**
 * create_file - this is used to Creates a file.
 * @filename: is  pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, x, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(f, text_content, l);

	if (f == -1 || x == -1)
		return (-1);

	close(f);

	return (1);
}
