#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds new node;
 * @head: pointer of pointer
 * @str: the str to add to the lis;
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (head != NULL)
	{
		int len = strlen(str);
		list_t *new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = len;
		if (*head == NULL)
			*head = new_node;
		else
		{
			list_t *temp = *head;

			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
