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
	int i, len = strlen(str);

	if (str != NULL)
	{
		char *ptr = malloc(sizeof(char) * len + 1);

		if (ptr == NULL)
			return (NULL);

		while (str[i])
		{
			ptr[i] = str[i];
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
