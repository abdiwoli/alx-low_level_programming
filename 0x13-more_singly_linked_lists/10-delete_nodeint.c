#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - function name
 * @index: indx to insert
 * @head: the pointer list
 * Return: 1 on succes -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int current_idx = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current != NULL && current_idx < (index - 1))
	{
		current = current->next;
		current_idx++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
