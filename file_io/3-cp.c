#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * buf_crt - creates buffer
 * @f: file
 * Return: address of buf
 */
char *buf_crt(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f), exit(99);

	return (buf);
}

/**
 * cf - Closes file
 * @fd: fd
 */
void cf(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

/**
 * main - entry point
 * @argc: count of args
 * @argv: matrix of args
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int init, dest, r, w;
	char *buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	buf = buf_crt(argv[2]);
	init = open(argv[1], O_RDONLY);
	r = read(init, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (init == -1 || r == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n",
				argv[1]), free(buf), exit(98);

		w = write(dest, buf, r);
		if (dest == -1 || w == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n",
				argv[2]), free(buf), exit(99);

		r = read(init, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	cf(init);
	cf(dest);

	return (0);
}
