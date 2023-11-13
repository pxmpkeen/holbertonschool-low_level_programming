#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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
	unsigned int i = 0;

	int l1 = (s1 == NULL) ? 0 : strlen(s1);
	int l2 = (s2 == NULL) ?
		0 : (strlen(s2) >= n) * n + (strlen(s2) < n) * strlen(s2);

	str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (str == NULL)
		return (NULL);

	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}

	i = 0;

	while (i < l2)
	{
		str[i + l1] = s2[i];
		i++;
	}

	str[l1 + l2] = 0;

	return (str);
}
int main(void)
{
	char *s;

	s = string_nconcat("Hello", NULL, 12);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, "Hello", 0);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, NULL, 10);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
