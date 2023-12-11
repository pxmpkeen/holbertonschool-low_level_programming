#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: context
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
		w = write(fd, text_content, strlen(text_content));
	else
		return (1);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
