#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *str;

	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;

	i *= !(s1 == NULL);
	j *= !(s2 == NULL);

	str = malloc(sizeof(char) * (i + j) + 1);
	if (str == NULL)
		return (NULL);

	while (k != i)
	{
		str[k] = s1[k];
		k++;
	}
	while (k != i + j)
	{
		str[k] = s2[k - i];
		k++;
	}
	str[k] = 0;
	return (str);
}
