#include <stddef.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog struct
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(*d).name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", (*d).name);
	!(*d).age ? printf("Age: 0\n") : printf("Age: %f\n", (*d).age);
	(*d).owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", (*d).owner);
}
