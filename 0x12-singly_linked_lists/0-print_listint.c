/*
 * Auth: Sunday Justice Gabriel
 * project on linked list ALX
 */
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all he elements of a list in list_t
 * @h: singled link list
 *
 * Return: The number of node in h.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0,"(nill)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
}
