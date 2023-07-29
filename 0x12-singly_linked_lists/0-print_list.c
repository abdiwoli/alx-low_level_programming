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
	int i, len = 0;
	char *s;

	for (i = 0; h != NULL; i++)
	{
		s = h->str;
		len = s == NULL ? 0 :  _strlen(s);
		if (s == NULL)
			s = "(nil)";
		printf("[%d] %s\n", len, s);
		h = h->next;
	}
	return (i);
}
