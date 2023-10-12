#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - function prints elemets
 * @h: linked list element
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *hh = h;

	while (hh != NULL && hh->prev != NULL)
	{
		hh = hh->prev;
	}
	while (hh != NULL)
	{
		printf("%d\n", hh->n);
		hh = hh->next;
		n++;
	}
	return (n);
}
