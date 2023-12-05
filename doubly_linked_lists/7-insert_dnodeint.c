#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index of the list
 * @n: value
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t)), *temp = *h;

	if (!temp && !idx)
		return (add_dnodeint(h, n));
	else if (!temp)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	while ((*temp).next)
	{
		temp = (*temp).next;
		index++;
		if (index == idx)
		{
			(*node).n = n;
			(*node).next = temp;
			(*node).prev = (*temp).prev;
			(*(*temp).prev).next = node;
			(*temp).prev = node;
			return (node);
		}
	}
	if (index == idx - 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
