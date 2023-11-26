#include <stdio.h>
#include <stdlib.h>

int printopc(int (*f)(int, char **), int n);
/**
 * main - entry point
 * @argc: count of args
 * @argv: martix of args
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
		printf("Error\n"), exit(1);

	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);

	putchar(printopc(main, n));

	return (0);
}
/**
 * printopc - prints opcodes
 * @f: pointer to function
 * @n: number of printed opcodes
 * Return: New line
 */
int printopc(int (*f)(int, char **), int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%02x ", ((unsigned char *)f)[i]);
	printf("%02x ", ((unsigned char *)f)[i]);
	return (10);
}
