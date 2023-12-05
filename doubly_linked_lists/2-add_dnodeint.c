#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning
 * @h: pointer to node
 * @n: int value
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr->n = n;
	ptr->next = (*head);
	ptr->prev = NULL;
	if (*head)
	{
		*head = ptr;
		return (ptr);
	}
	(*head)->prev = ptr;
	return (ptr);
}
