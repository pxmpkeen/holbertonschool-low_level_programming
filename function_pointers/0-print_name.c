#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: char *
 * @f: pointer func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
