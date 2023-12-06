#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len, dec = 1;
	unsigned int res = 0;

	if (!b)
		return (0);

	len = (int)strlen(b) - 1;
	while (len >= 0)
	{
		if (!(b[len] == '1' || b[len] == '0'))
			return (0);
		res += (unsigned int)((b[len] - 48) * dec);
		dec *= 2;
		len--;
	}
	return (res);
}
