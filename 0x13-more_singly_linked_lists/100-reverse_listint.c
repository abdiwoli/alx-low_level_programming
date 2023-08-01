#include "lists.h"
/**
 * reverse_listint - function reverses list
 * @head: the list
 * Return: the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head2 = NULL, *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = head2;
		head2 = *head;
		if (temp == NULL)
			break;
		*head = temp;
	}
	*head = head2;
	return (*head);
}
