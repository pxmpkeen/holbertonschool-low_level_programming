#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

void file_changer(char *s, char v);
void file_checker(char *s, char v);
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

	file_checker("./test_0.sh", '0');

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

void file_checker(char *s, char v)
{
	FILE* ptr;
	char ch;
	int i = 0;

	ptr = fopen(s, "r");

	if (ptr != NULL)
	{
		while (ch != EOF)
		{
			ch = fgetc(ptr);
			if (i == 7 && ch == 'b')
			{
				file_changer(s, v);
			}
			i++;
		}
	}

	fclose(ptr);
}
void file_changer(char *s, char v)
{
	char *str, p[4] = "cat ", b[22] = " | tr 'bash' 'sh' | > ";
	int i, j;
	char d[21] = "./launch_101-mul.sh ";
	d[20] = v;

	while (*(s + i))
		i++;

	str = malloc(sizeof(char) * (4 + 22 + i + i));
	while (j < 4)
		str[j] = p[j], j++;
	while (j < 4 + i)
		str[j] = s[j - 4], j++;
	while (j < 4 + i + 22)
		str[j] = b[j - 4 - i], j++;
	while (j < 4 + i + 22 + i)
		str[j] = s[j - 4 - i - 22], j++;
	system(str);
	free(str);
	system("./test_0.sh");
}
