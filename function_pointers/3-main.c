#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int m, n;
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	m = atoi(argv[1]), n = atoi(argv[3]);
	if ((*op != '*' && *op != '/' && *op != '+' && *op != '-' && *op != '%')
			|| strlen(op) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(m, n));
	return (0);
}
