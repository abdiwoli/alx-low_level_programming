#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - function returns len
 * @h: linked list element
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *hh = h;

	while (hh != NULL && hh->prev != NULL)
	{
		hh = hh->prev;
	}
	while (hh != NULL)
	{
		hh = hh->next;
		n++;
	}
	return (n);
}
