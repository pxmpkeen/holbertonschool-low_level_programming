#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
/**
 * read_textfile - reads text file
 * @filename: filename
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	int fd, t, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	t = read(fd, c, letters);
	w = write(STDOUT_FILENO, c, letters);

	free(c);
	close(fd);
	return (w);
}
