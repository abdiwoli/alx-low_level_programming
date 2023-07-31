#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function addts new node at the beg
 * @head: linked lis
 * @n: the value
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		return (*head);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
