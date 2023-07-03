#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strchr - locates char in string
 * @c: char to locate
 * @s: string source pointer
 * Return: returns pointer
 */

char *_strchr(char *s, char c)
{
	unsigned long int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
