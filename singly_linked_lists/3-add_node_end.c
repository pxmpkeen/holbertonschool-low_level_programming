#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - insertion
 * @head: node in linked list
 * @str: string in node
 * Return: size of nodes in linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;

	if (!str)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	(*node).str = strdup(str);
	(*node).len = strlen(str);
	(*node).next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while ((*temp).next)
		temp = (*temp).next;
	(*temp).next = node;
	return (node);
}
