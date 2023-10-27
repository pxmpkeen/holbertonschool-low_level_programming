#include "main.h"
#include <stddef.h>
/**
 * _strstr - func
 * @haystack: char
 * @needle: char
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n)
		{
			h++;
			n++;
		}
		if (!(*n))
			return (haystack);
		haystack++;
	}

	return (NULL);
}
