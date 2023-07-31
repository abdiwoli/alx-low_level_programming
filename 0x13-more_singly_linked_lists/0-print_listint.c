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
	int n;
	size_t num = 0;

	while (h != NULL)
	{
		n = h->n;
		printf("%d\n", n);
		num++;
		h = h->next;
	}
	return (num);
}
