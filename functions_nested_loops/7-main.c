#include <stdio.h>
#include "main.h"
#include <math.h>
#include <limits.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(INT_MIN);
    _putchar('0' + r);
    _putchar('\n');
    printf("%d - %d", INT_MIN, INT_MAX);
}
int print_last_digit(int n)
{
        if (n < 0)
        {	
                int k = n % 10;
		int m = k * -1;
		

                _putchar(m + 48);
                return (m);
        }
        else
        {
                _putchar((n % 10) + 48);
                return (n % 10);
        }
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}
