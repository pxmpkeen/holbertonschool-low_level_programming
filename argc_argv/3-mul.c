#include <stdio.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1, k = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	while (i <= 2)
	{
		k *= *argv[i] - 48;
		i++;
	}
	printf("%d\n", k);
	return (0);
}
