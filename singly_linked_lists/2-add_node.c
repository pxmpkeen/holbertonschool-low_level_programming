#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - insertion
 * @head: node in linked list
 * @str: string in node
 * Return: size of nodes in linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);
	(*node).str = strdup(str);
	(*node).len = strlen(str);
	(*node).next = *head;
	*head = node;
	return (*head);
}
