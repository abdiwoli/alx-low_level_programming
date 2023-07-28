#include <stdio.h>
#include "lists.h"
/**
 * list_len - counts number of elements
 * @h: linkedlist
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
