#include <stdio.h>
#include "lists.h"
/**
 * _strlen - returns length of param
 * @s: string pram
 * Return: int type
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_list - function prints elements of linked list
 * @h: linked list
 * Return:  size t
 */
size_t print_list(const list_t *h)
{
	int i;
	char *s;

	for (i = 0; h != NULL; i++)
	{
		s = h->str;
		if (s == NULL)
			s = "(nil)";
		printf("[%d] %s\n", h->len, s);
		h = h->next;
	}
	return (i);
}
