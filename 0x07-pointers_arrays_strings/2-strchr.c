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
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((s + i));
		i++;
	}
	if (*s == c)
		return (c);
	return (NULL);
}
