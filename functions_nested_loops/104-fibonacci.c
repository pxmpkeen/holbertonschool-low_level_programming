#include <stdio.h>
#define l 10000000000
/**
 * main - Something usefull
 *
 * Return: Something much more usefull
 */
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	int i = 0;
	unsigned long int c, h1, h2, h3, f1 = 0, f2 = 0;

	while (i <= 97)
	{
		if (a + b > l || f1 > 0 || f2 > 0)
		{
			h1 = (a + b) / l;
			h2 = (a + b) % l;
			h3 = f1 + f2 + h1;
			f1 = f2, a = b;
			b = h2, f2 = h3;
			if (i != 97)
			{
				printf("%lu%010lu, ", f2, b);
			}
			else
			{
				printf("%lu%010lu", f2, b);
			}
		}
		else
		{
			c = a + b;
			a = b, b = c;
			printf("%lu, ", c);
		}
		i++;
	}
	printf("\n");
	return (0);
}
