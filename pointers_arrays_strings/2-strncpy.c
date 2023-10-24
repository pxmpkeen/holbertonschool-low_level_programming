#include "main.h"
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
	int i = 0;

	while (*(src + i))
	{
		i++;
	}
	if (n <= i)
	{
		i = 0;
		while (n <= i)
		{
			*(dest + i) = *(src + i);
		}
	}

	return (dest);
}
