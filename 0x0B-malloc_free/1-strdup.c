#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer
 * @str: the string
 * Return: pointer
 */

char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *ptr = malloc(sizeof(char) * strlen(str) + 1);
		char *copy_ptr = ptr;

		if (ptr == NULL)
			return (NULL);

		while (*str)
		{
			*ptr = *str;
			str++;
			ptr++;
		}
		*ptr = '\0';
		return (copy_ptr);
	}
	return (NULL);
}
