#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, k = 0;
	char *s;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			k = 1;
			i++;
			switch (format[i - 1])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char*);
					if (!s)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					continue;
			}
			while (k && format[i])
				printf(", "), k = 0;
		}
	}
	printf("\n");
	va_end(ap);
}
