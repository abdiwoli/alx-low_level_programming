#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - functions free list
 * @head: the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
