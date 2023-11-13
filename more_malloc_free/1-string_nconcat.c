#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates strings
 * @s1: first
 * @s2: second
 * @n: int
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0;


	if (s1 == NULL)
		i = 0;
	else
	{
		while (*(s1 + i))
			i++;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		while (*(s2 + j))
			j++;
	}

	if (n >= j)
		n = j;

	str = malloc(sizeof(char) * (i + n + 1));

	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (*(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(str + i) = *(s2 + j);
		j++;
		i++;
	}

	str[i] = 0;

	return (str);
}
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", NULL, 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
