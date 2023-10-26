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
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
