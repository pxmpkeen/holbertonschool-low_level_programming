#include <stdio.h>

void func (void) __attribute__ ((constructor));
/**
 * func - before main
 */
void func (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
