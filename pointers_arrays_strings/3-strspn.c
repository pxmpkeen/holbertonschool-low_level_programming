#include "main.h"
/**
 * _strspn - does smth strange
 * @s: string
 * @accept: string2
 *
 * Return: un
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0, n = 0;

	while (*(s + i))
	{
		j = 0;
		k = 0;
		while (*(accept + j))
		{
			if (*(s + i) != *(accept + j))
			{
				k++;
				n = i;
			}
			j++;
		}
		if (k == j)
			return (n);
		i++;
	}

	return (0);
}
