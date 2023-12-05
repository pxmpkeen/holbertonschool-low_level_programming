#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: address of node
 * @index: node of index to return
 * Return: node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	while ((*temp).next)
	{
		if (n == index)
			return (temp);
		temp = (*temp).next, n++;
	}
	return (NULL);
}
