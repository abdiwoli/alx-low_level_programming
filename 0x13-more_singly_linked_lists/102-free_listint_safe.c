#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint_safe - function free
 * @h: the list
 * Return: num reed
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *arr[1024];
	listint_t *head = *h;
	int i, n = 0, flag = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == arr[i])
			{
				flag = 1;
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
		free((void *)arr[i]);
	}

	*h = NULL;

	return (n);
}

