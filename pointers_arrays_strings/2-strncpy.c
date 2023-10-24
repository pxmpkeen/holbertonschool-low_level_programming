#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies str
 * @dest: destination
 * @src: source
 * @n: counter
 *
 * Return: int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (j + i < n)
	{
		if (*(src + j) != '\0')
		{
			*(dest + j) = *(src + j);
			j++;
		}
		else
		{
			*(dest + j + i) = '\0';
			i++;
		}
	}
	return (dest);
}
