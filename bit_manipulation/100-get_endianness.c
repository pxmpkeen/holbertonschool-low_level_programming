#include "main.h"
#include <stdio.h>
/**
 * get_endianness - determines endiannes
 * Return: 0 if BE, 1 if LE
 */
int get_endianness(void)
{
	short lab_rat_duo = 1;
	char *cell = (char *)&lab_rat_duo;

	return (*cell);
}
