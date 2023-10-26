#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - does smth strange
 * @s: string
 * @accept: string2
 *
 * Return: un
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (*(s + i))
	{
		j = 0;
		k = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				k = 1;
			}
			j++;
		}
		if (k)
			return (s + i);
		i++;
	}

	return (NULL);
}
