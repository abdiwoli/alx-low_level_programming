#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>




/**
 * print_listint - function prints int
 * @h: linked list paramater
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n, num;

	while (h)
	{
		n = h->n;
		printf("%lu\n", n);
		num++;
		h = h->next;
	}
	return (num);
}
