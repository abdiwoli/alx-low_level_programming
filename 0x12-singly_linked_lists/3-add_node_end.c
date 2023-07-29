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
		list_t *node = malloc(sizeof(list_t));

		if (node == NULL)
			return (NULL);
		node->str = malloc(strlen(str) + 1);
		if (node->str == NULL)
			return (NULL);
		strcpy(node->str, str);
		node->next = NULL;
		(*head)->next = node;
		return (node);
	}
	else
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = malloc(strlen(str) + 1);
		if ((*head)->str == NULL)
			return (NULL);
		strcpy((*head)->str, str);
		(*head)->next = NULL;
		return (*head);
	}
}
