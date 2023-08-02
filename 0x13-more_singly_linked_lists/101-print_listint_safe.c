#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function prints safe
 * Return:n
 * @head: the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *arr[100];
	int i, n = 0, flag = 0, cycle_idx = -1;

	while (head)
	{
		for (i = 0; i < n; i++)
		{
			if (head == arr[i])
			{
				flag = 1;
				cycle_idx = i;
				break;
			}
		}

		if (flag == 1)
			break;

		arr[n] = head;
		n++;
		head = head->next;
	}

	for (i = 0; i < n; i++)
	{
		printf("[%p] %d\n", (void *)arr[i], arr[i]->n);
	}

	if (flag == 1)
	{
		printf("-> [%p] %d\n", (void *)arr[cycle_idx], arr[cycle_idx]->n);
		exit(98);
	}

	return (n);
}

