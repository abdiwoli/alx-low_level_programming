#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - function prints safe
 * Return:n
 * @head: the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *arr[1024];
	int i, n = 0;

	if (head == NULL)
		return (0);
	while (head && i < 1024)
	{
		for (i = 0; i < n; i++)
		{
			if (head == arr[i])
			{
				return (arr[i]);
			}
		}

		arr[n] = head;
		n++;
		head = head->next;
	}
	return (NULL);
}
