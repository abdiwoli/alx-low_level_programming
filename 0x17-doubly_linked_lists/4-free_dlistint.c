#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint_t - function name
 * @head: linkedlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
