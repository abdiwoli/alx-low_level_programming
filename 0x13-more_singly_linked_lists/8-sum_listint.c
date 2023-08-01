#include "lists.h"
/**
 * sum_listint - returns num of elements
 * @head: linked list
 * Return: num
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
