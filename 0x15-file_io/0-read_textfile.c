#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and  print to STDOUT.
 * @filename: the text file that being read.
 * @letters: the number of letters that is to be read.
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t x;
	ssize_t n;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	n = read(f, buf, letters);
	x = write(STDOUT_FILENO, buf, n);

	free(buf);
	close(f);
	return (x);
}
