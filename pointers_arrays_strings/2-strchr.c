#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - locates
 * @s: string
 * @c: char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i = 1;

	while ((*(s + i) != c) && *(s + i))
	{
		i++;
	}
	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
