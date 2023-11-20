#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char _test_num(void);

/**
 * _is_digit - checks whether str consists of num
 * @n: string num
 * @argv: argv
 *
 * Return: void
 */
int _is_digit(int n, char **argv)
{
	int i;

	for (i = 0; argv[n][i]; i++)
		if (argv[n][i] > 57 || argv[n][i] < 48)
			printf("Error\n"), exit(98);
	return (i);
}
/**
 * _parent_file_changing - concatenates strings of parent command
 *
 * Return: char *
 */
void *_parent_file_changing(void)
{
	FILE *f;
	int c, i;
	char *s = "./launch_101-mul.sh";
	char str[30] = "valgrind ./launch_101-mul.sh ";

	str[29] = _test_num();
	f = fopen(s, "r+");

	if (f != NULL)
	{
		while ((c = fgetc(f)) != EOF)
		{
			if (i == 6 && c == 'b')
			{
				fseek(f, -1, SEEK_CUR);
				fputc('s', f);
				fseek(f, 0, SEEK_CUR);
			}
			else if (i == 7 && c == 'a')
			{
				fseek(f, -1, SEEK_CUR);
				fputc('h', f);
				fseek(f, 0, SEEK_CUR);
			}
			else if ((i == 8 && c == 's') || (i == 9 && c == 'h'))
			{
				fseek(f, -1, SEEK_CUR);
				fputc(10, f);
				fseek(f, 0, SEEK_CUR);
			}
			i++;
		}
		system(str);
	}
	fclose(f);
}
/**
 * _test_num - checks the number of test
 * Return: char
 */
char _test_num(void)
{
	FILE *f;
	char c;
	int i = 0;

	system("history | tail -2 > h.txt");

	f = fopen("h.txt", "r");

	if (f != NULL)
		while (c != EOF || i != 30)
			c = fgetc(f), i++;
	fclose(f);
	return (c);
}
/**
 * _test_title - title of test
 * Return: char
 */
char *_test_title(void)
{
	char test[7] = "./test_", sh[3] = ".sh", *s;
	int i;

	s = malloc(sizeof(char) * 11);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < 7; i++)
		s[i] = test[i];

	s[i] = _test_num(), i++;

	for (; i < 11; i++)
		s[i] = sh[i - 8];

	return (s);
}
/**
 * _changing_file - changes file content
 * @s: str
 * Return: void
 */
void _changing_file(char *s)
{
	FILE *f;
	int c, i;

	f = fopen(s, "r+");

	if (f != NULL)
	{
		while ((c = fgetc(f)) != EOF)
		{
			if (i == 6 && c == 'b')
			{
				fseek(f, -1, SEEK_CUR);
				fputc('s', f);
				fseek(f, 0, SEEK_CUR);
			}
			else if (i == 7 && c == 'a')
			{
				fseek(f, -1, SEEK_CUR);
				fputc('h', f);
				fseek(f, 0, SEEK_CUR);
			}
			else if ((i == 8 && c == 's') || (i == 9 && c == 'h'))
			{
				fseek(f, -1, SEEK_CUR);
				fputc(10, f);
				fseek(f, 0, SEEK_CUR);
			}
			i++;
		}
	}
	fclose(f);
}
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
	char *file_name;
	char *s, p[8] = "printf '", b[33] = "\n' | bc | tr -d '\\\\\n' && echo";

	if (argc != 3)
		printf("Error\n"), exit(98);

	i = _is_digit(1, argv), j = _is_digit(2, argv);

	s = malloc(sizeof(char) * (42 + i + j));
	if (s == NULL)
		printf("Error\n"), exit(98);

	file_name = _test_title();
	_changing_file(file_name);
	free(file_name);
	_parent_file_changing();

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
