/*
 * Author: Sunday, Justice Gabriel
 * project: Singled link list Task 4
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees the list_t list
 * @head: A pointer to the list_t list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
