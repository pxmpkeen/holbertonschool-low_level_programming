#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory
 * @s: area
 * @b: byte
 * @n: counter
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
