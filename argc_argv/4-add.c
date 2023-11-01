#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1, k = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			k += atoi(argv[i]);
			i++;
		}
		printf("%d\n", k);
	}

	return (0);
}
