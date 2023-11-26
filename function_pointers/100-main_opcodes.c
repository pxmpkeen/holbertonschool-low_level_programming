#include <stdio.h>
#include <stdlib.h>

void printopc(int (*f)(int, char **), int n);
/**
 * main - entry point
 * @argc: count of args
 * @argv: martix of args
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
		printf("Error\n"), exit(1);

	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);

	printopc(main, n);
	printf("\n");

	return (0);
}
/**
 * printopc - prints opcodes
 * @f: pointer to function
 * @n: number of printed opcodes
 * Return: New line
 */
void printopc(int (*f)(int, char **), int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%02x ", ((unsigned char *)f)[i]);
	printf("%02x ", ((unsigned char *)f)[i]);
}
