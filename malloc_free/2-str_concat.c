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

	str = malloc(sizeof(char) * ((!(s1 == NULL) * i) + (!(s2 * NULL) * j)) + 1);
	if (str == NULL)
		return (NULL);

	while (k != i)
	{
		str[k] = s1[k];
		k++;
	}
	while (k != i + j)
	{
		str[k] = s2[k];
		k++;
	}
	str[k] = 0;
	return (str);

}
