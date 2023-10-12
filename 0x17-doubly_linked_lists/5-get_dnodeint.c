#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function name
 * @head: linked lis
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index && head->next != NULL)
	{
		head = head->next;
		n++;
	}
	if (n == index)
		return (head);
	return (NULL);
}
