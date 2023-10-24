#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: dstination
 * @src: source
 * @n: counter
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j))
	{
		j++;
	}

	if (i != 0 && j != 0)
	{
		j = 0;
		while (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
	}
	if (i != 0 && j != 0)
	{
		*(dest + i) = 0;
	}
	return (dest);
}
