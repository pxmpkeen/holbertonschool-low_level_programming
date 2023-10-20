#include <stdio.h>
#include "main.h"
#define MAX 10000000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	unsigned long int a, b, k, fib, init = 1, sec = 2, init_1 = 0, sec_1 = 0;

	printf("%lu, ", init);
	printf("%lu", sec);
	for (i = 2; i < 98; i++)
	{
		printf(", ");
		if (init + sec > MAX || sec_1 > 0 || init_1 > 0)
		{
			a = (init + sec) / MAX;
			b = (init + sec) % MAX;
			k = a + init_1 + sec_1;
			init_1 = sec_1;
			init = sec;
			sec_1 = k;
			sec = b;
			printf("%lu%010lu", sec_1, sec);
		}
		else
		{
			fib = init + sec;
			init = sec;
			sec = fib;
			printf("%lu", fib);
		}
	}
	printf("\n");
	return (0);
}
