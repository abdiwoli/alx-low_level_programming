#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds new node;
 * @head: pointer of pointer
 * @str: the str to add to the lis;
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL)
	{
		list_t *node = malloc(sizeof(list_t));

		if (node == NULL)
			return (NULL);
		node->str = malloc(strlen(str) + 1);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		strcpy(node->str, str);

		node->next = *head;
		node->len = strlen(str);
		*head = node;
		return (node);
	}
	else
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = malloc(strlen(str) + 1);
		if ((*head)->str == NULL)
		{
			free(*head);
			return (NULL);
		}
		(*head)->len = strlen(str);
		strcpy((*head)->str, str);
		(*head)->next = NULL;
		return (*head);
	}
}
