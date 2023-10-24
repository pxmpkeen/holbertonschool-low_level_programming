#include "main.h"
/**
 * _atoi - converts str to int
 * @s: str
 *
 * Return: return
 */
int _atoi(char *s)
{
	int i = 0, m = 0;
	unsigned int n = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == 45)
		{
			m++;
		}

		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			n = n * 10 + (*(s + i) - 48);

			if (*(s + i + 1) < 48 || *(s + i + 1) > 57)
			{
				break;
			}
		}

		i++;
	}
	if (m % 2 == 1)
	{
		n = -n;
	}

	return (n);
}
