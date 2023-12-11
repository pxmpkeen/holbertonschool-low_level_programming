#include "main.h"
/**
 * read_textfile - reads text file
 * @filename: filename
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz;
	char *c = calloc(letters, sizeof(char));

	if (!filename || !c)
		return (0);

	fd = open(filename, O_WRONLY);

	if (fd < 0)
		return (0);

	sz = write(fd, c, letters);
	close(fd);
	return (sz);
}
