#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pop head
 * @head: linked list pointer
 * Return: number of deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (n);
}
