#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function name
 * @h: addres of linked list
 * @idx: index
* Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int nn = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (nn < index - 1 && current != NULL)
	{
		current = current->next;
		nn++;
	}
	if (nn == index - 1)
	{
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
		}
		free(current);
		return (1);
	}
	return (-1);
}
