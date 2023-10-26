#include "main.h"
/**
 * _memcpy - copies
 * @dest: destination
 * @src: source
 * @n: counter
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
