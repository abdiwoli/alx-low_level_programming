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
		char *ptr = malloc(sizeof(char) * strlen(str));

		strcpy(ptr, str);
		return (strlen(str) > 0 ? ptr : NULL);
	}
	return (NULL);
}
