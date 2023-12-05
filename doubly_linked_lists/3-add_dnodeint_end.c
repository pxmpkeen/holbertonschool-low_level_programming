#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to address of node
 * @n: int value
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *temp;

	if (!node)
	{
		free(node);
		return (NULL);
	}

	(*node).n = n;
	(*node).next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while ((*temp).next)
		temp = (*temp).next;
	(*node).prev = temp;
	(*temp).next = node;
	return (node);
}
