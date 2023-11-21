#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - get op func
 * @s: s
 * Return: int
 */
int (*get_op_func(char *s))(int n, int m)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (*s == *ops[i].s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
