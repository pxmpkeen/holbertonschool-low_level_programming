#include "main.h"
/**
 * cap_string - capitalizes each word
 * @s: word
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;
	char t;

	while (*(s + i))
	{
		t = *(s + i - 1);
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			if (t == ' ' || t == '\t' || t == '\n' || t == ',' || t == ';' || t == '.')
				*(s + i) -= 32;

			if (t == '!' || t == '?' || t == '(' || t == ')' || t == '{' || t == '}')
				*(s + i) -= 32;

			if (t == '"')
				*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
