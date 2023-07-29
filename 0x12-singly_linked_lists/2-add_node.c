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

		node->str = malloc(strlen(str) + 1);
		strcpy(node->str, str);

		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		*head = malloc(sizeof(list_t));
		(*head)->str = malloc(strlen(str) + 1);
		strcpy((*head)->str, str);
		(*head)->next = NULL;
		return (*head);
	}
}
