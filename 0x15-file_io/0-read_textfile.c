#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t xx;
	ssize_t y;
	ssize_t z;

	xx = open(filename, O_RDONLY);
	if (xx == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	z = read(xx, buf, letters);
	y = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(xx);
	return (y);
}
