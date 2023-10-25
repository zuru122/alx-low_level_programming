/*
 * Author: Sunday, Jutice Gabriel
 * Project: Task 3-add_node_end.c
 */

#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the of a lis list_t
 * @head: A pointer to the head of the list list_t
 * @str: The string to be added to the list_t list
 *
 * Return: Null if the function fails, otherwise the address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int count;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (count = 0; str[count];)
		count++;
	new->str = dup;
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
