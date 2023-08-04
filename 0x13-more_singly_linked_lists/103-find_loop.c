#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function prints safe
 * Return:n
 * @head: the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	int i, n = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		for (i = 0; i < n; i++)
		{
			if (head == arr[i])
			{
				flag = 1;
				return ((void *)head);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		n++;
		head = head->next;
	}

	return (NULL);
}
