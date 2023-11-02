#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	unsigned long int l, k = 0;

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
			l = 0;
			while (l < strlen(argv[i]))
			{
				if (argv[i][l] < 48 || argv[i][l] > 57)
				{
					printf("Error\n");
					return (1);
				}
				l++;
			}
			k += atoi(argv[i]);
			i++;
		}
		printf("%ld\n", k);
	}

	return (0);
}
