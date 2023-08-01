#include "lists.h"
/**
 * get_nodeint_at_index - function name
 * @index: indx to return
 * @head: the pointer list
 * Return: n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 1; i <= index; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
