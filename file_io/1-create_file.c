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
 * @text_content: context
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content)
		count = strlen(text_content);
	else
	{
		close(fd);
		return (1);
	}

	w = write(fd, text_content, count);
	if (w == -1 || w != count)
		return (-1);

	close(fd);
	return (1);
}
