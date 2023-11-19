#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: matrix of agruments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, j, k;
	char *s, p[8] = "printf '", b[33] = "\n' | bc | tr -d '\\\\\n' && echo";

	if (argc != 3)
		printf("Error\n"), exit(98);

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] > 57 || argv[1][i] < 48)
			printf("Error\n"), exit(98);
	for (j = 0; argv[2][j]; j++)
		if (argv[2][j] > 57 || argv[2][j] < 48)
			printf("Error\n"), exit(98);

	s = malloc(sizeof(char) * (42 + i + j));
	if (s == NULL)
		printf("Error\n"), exit(98);

	for (k = 0; k < 8; k++)
		s[k] = p[k];
	for (; k < i + 8; k++)
		s[k] = argv[1][k - 8];
	s[k] = '*', k++;
	for (; k < i + j + 9; k++)
		s[k] = argv[2][k - i - 9];
	for (; k < i + j + 42; k++)
		s[k] = b[k - i - j - 9];

	system(s);
	free(s);
	exit(0);
	return (0);
}
