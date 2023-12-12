#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * exit_func - just a helper
 * @s: to dprintf
 * @err: exit code
 * @fn: file name
 */
void exit_func(int err, char *s, char *fn)
{
	dprintf(STDERR_FILENO, "%s %s\n", s, fn);
	exit(err);
}
/**
 * main - entry point
 * @argc: count of args
 * @argv: matrix of args
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *text;
	int fd, rf, on, wn, cf, cn;
	if (argc != 3)
		exit_func(97, "Usage: cp file_from file_to", "");
	fd = open(argv[1], O_RDONLY);
	text = malloc(sizeof(char) * BUFFER_SIZE);
	if (fd == -1 || !text)
		free(text), exit_func(98, "Error: Can't read from file", argv[1]);
	rf = read(fd, text, BUFFER_SIZE);
	if (rf == -1)
		free(text), exit_func(98, "Error: Can't read from file", argv[1]);
	on = open(argv[2], O_CREAT, O_WRONLY, O_TRUNC, 0664);
	if (on == -1)
		free(text), exit_func(98, "Error: Can't read from file", argv[2]);
	wn = write(on, text, BUFFER_SIZE);
	if (wn == -1)
		free(text), exit_func(99, "Error: Can't write to", argv[2]);
	cf = close(fd), cn = close(on);
	if (cf == -1)
		free(text), exit_func(100, "Can't close fd", argv[1]);
	if (cn == -1)
		free(text), exit_func(100, "Can't close fd", argv[2]);
	free(text);
	return (0);
}
