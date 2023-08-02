#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints int
 * @head: the linked list
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	const listint_t *cycle_start = NULL;
	int n = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		n++;

		if (temp->next >= temp)
		{
			cycle_start = temp;
			break;
		}

		temp = temp->next;
	}

	if (cycle_start)
	{
		temp = cycle_start;
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;

			if (temp == cycle_start)
			{
				exit(98);
			}
		}
	}

	return (n);
}
