#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string
 * @s: string
 *
 * Return: char
 */
char *rot13(char *s)
{
	int i = 0;
	char *c;

	while (*(s + i))
	{
		c = (s + i);
		while ((*c >= 65 && *c <= 90) || (*c >= 97 && *c <= 122))
		{
			if ((*c >= 65 && *c <= 77) || (*c >= 97 && *c <= 109))
			{
				*c += 26;
			}
			*c -= 13;
			break;
		}
		i++;
	}

	return (s);
}
