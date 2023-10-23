#include "main.h"
#include <stdio.h>
/**
 * _strcpy - string copy
 * @dest: dest
 * @src: src
 *
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
