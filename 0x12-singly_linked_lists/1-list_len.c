/*
 * Author: Sunday, Justice Gabriel
 * Project: linked list "1-list_len.c"
 */

#include "lists.h"

/**
 * list_len - gets the number of element in a linked list_t list
 * @h: the linked list_t list.
 *
 * Return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
