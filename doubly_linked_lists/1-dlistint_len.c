#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements
 * @h: pointer to node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	while (h)
	{
		h = (*h).next;
		size++;
	}
	return (size);
}
