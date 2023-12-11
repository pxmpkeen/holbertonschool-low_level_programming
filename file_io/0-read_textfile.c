#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - reads text file
 * @filename: filename
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c = calloc(letters, sizeof(char));

	if (!filename || !c);
		return (0);

	fd = open(filename, O_WRONLY);

	if (fd < 0)
		return (0);

	return (write(fd, c, letters));
}
