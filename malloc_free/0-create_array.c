#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of malloc
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);

	while ((unsigned int) i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	return (ptr);
}
