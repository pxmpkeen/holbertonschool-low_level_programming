#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	long double fib, init = 1, sec = 2;

	printf("%.0Lf, ", init);
	printf("%.0Lf", sec);
	for (i = 0; i < 96; i++)
	{
		fib = init + sec;
		printf(", %.0Lf", fib);
		init = sec;
		sec = fib;
	}
	printf("\n");
	return (0);
}
