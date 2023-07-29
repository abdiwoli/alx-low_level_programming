#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - adds new node;
 * @head: pointer of pointer
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head);
}
