#include "main.h"
/**
 * leet - leets
 * @s: s
 *
 * Return: char
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *letter;
	char num[] = "43071";
	char uc[] = "AEOTL";
	char lc[] = "aeotl";

	while (*(s + i))
	{
		letter = (s + i);
		j = 0;
		while (j < 5)
		{
			if (*letter == *(uc + j) || *letter == *(lc + j))
			{
				*letter = *(num + j);
			}
			j++;
		}
		i++;
	}

	return (s);
}
