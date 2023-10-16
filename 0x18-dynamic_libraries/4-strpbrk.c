#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strpbrk - function that searches strings
 * @s: the string or source
 * @f: the string to search
 * Return: returns pointer
 */
char *_strpbrk(char *s, char *f)
{
	int i = 0;
	int j = 0;

	while (*(s + i))
	{
		while (*(f + j))
		{
			if (*(f + j) == *(s + i))
				break;
			j++;
		}
		if (*(f + j) != '\0')
			return (s + i);
		i++;
		j = 0;
	}
	return (NULL);
}
