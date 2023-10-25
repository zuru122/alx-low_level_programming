/*
 * Author: Sunday, Justice Gabriel
 * Project: linked list 2-add_nodes.c
 */

#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the list_t list
 * @str: The added string to the list_t list
 *
 * Return: Null if the function fails, otherwise the address
 *  of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int count;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for  (count = 0; str[count];)
		count++;

	new->str = dup;
	new->len = count;
	new->next = *head;

	*head = new;

	return (new);
}
