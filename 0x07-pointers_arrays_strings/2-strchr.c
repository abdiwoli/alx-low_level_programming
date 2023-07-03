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
	int n = 0;
	char *pp = malloc(sizeof(char) * (strlen(s) + 1));
	char *p = pp;
	char f;

	for (i = 0; i < strlen(s); i++)
	{
		f = *s++;
		if (f == c)
			n = 1;
		if (n == 1)
			*p++ = f;
	}
	if (n == 0)
	{
		p = NULL;
		return (p);
	}
	return (pp);
}
