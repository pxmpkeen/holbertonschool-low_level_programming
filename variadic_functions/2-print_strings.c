#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints nums
 * @separator: separator
 * @n: count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(ap, char *);
		s == NULL ?
			printf("(nil)") :
			printf("%s", s);
		if (i < (int)n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
