#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_copy - function appends text
 * @dest: the destinaion to append
 * @str: the str to append
 */

void str_copy(char *dest, char *str)
{
	while (*dest)
		dest++;
	while (*str)
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
}
/**
 * argstostr - conconates all arguments
 * @ac: int
 * @av:arguments
 * Return: ponter
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int len = 0, len1 = 0, i;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len1 += strlen(av[i]);

	ptr = malloc(sizeof(char) * (len1 + 1));
	while (len < ac)
	{
		str_copy(ptr, av[len]);
		str_copy(ptr, "\n");
		len++;
	}
		return (ptr);
}
