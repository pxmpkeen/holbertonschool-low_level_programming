#include <stdio.h>
#include <string.h>
/**
 * helper - helper
 * @s: str
 * @i: i
 * @j: j
 * Return: int
 */
int helper(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (*(s + i) != *(s + j))
		return (0);
	else if (i <= j)
		return (helper(s, i + 1, j - 1));
	return (1);
}
/**
 * is_palindrome - is_palindrome
 * @s: str
 * Return: int
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l == 0)
		return (1);
	return (helper(s, 0, l - 1));
}
