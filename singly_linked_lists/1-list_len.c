#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: node in linked list
 * Return: size of nodes in linked list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = (*h).next;
		node_count++;
	}
	return (node_count);
}
