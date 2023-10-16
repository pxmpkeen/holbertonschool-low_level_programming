#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet()
{	
	int i;

	for (i = 97; i < 122; i++)
	{
		_putchar(i);
	}
}
