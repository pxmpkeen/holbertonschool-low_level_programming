#include <stdlib.h>
#include <stdio.h>

/**
 * _zero_checker - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _zero_checker(char **argv)
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
		printf("0\n"), exit(0);
}

/**
 * _array_initializer - set memery to zero in a new array
 * @str: char array.
 * @l: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_array_initializer(char *str, int l)
{
	int i = 0;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[l] = '\0';
	return (str);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @l: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char **argv, int l)
{
	int i;

	for (i = 0; argv[l][i]; i++)
		if (argv[l][i] < 48 || argv[l][i] > 57)
			printf("Error\n"), exit(98);

	return (i);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int f1l, f2l, fl, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	f1l = _checknum(argv, 1), f2l = _checknum(argv, 2);
	_zero_checker(argv), fl = f1l + f2l, nout = malloc(fl + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _array_initializer(nout, fl);
	k = fl - 1, i = f1l - 1, j = f2l - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = f1l - 1, j--, addl = 0, ca++, k = fl - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			fl--;
			free(nout), nout = malloc(fl + 1), nout = _array_initializer(nout, fl);
			k = fl - 1, i = f1l - 1, j = f2l - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
