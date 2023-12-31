#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib = 0, init = 1, sec = 2, sum = 3, sum_even = 2;

	while (fib <= 4000000)
	{
		fib = init + sec;
		init = sec;
		sec = fib;
		sum += fib;
		if (fib % 2 == 0)
		{
			sum_even += fib;
		}
	}
	printf("%ld\n", sum_even);
	return (0);
}
