#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - prints the linked list
 * @h: node in linked list
 * Return: size of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	char *default_str = "[0] (nil)";

	while (h)
	{
		if((*h).str == NULL)
		{
			printf("%s\n", default_str);
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		node_count++;
	}
	return (node_count);
}
