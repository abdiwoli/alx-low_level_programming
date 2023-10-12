#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - function name
 * @head: linkedlist head
 * @n: number
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *last;

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
