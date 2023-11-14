#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - realloc
 * @ptr: ptr
 * @old_size: old_size
 * @new_size: new_size
 *
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	while (ptr == NULL && (i < ((old_size <= new_size) ? old_size : new_size)))
	{
		*(p + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);

	return (p);
}
