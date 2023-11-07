#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	while (*(str + i))
		i++;

	if (i == 0)
		return (NULL);
	i++;
	s = malloc(sizeof(char) * i);

	while (j <= i)
	{
		s[j] = *(str + j);
		j++;
	}

	return (s);
}
