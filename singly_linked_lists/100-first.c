#include <stdio.h>
/**
 * func - before main
 */
void func (void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
