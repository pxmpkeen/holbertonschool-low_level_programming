#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - creates file
 * @filename: filename
 * @text_context: context
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	char *d = "";
	int fd, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY | O_CREAT, 600);

	w = !text_content ? write(fd, d, 1) :
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (w);
}
