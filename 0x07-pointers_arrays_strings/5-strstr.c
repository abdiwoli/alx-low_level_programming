#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - function that searches substrings
 * @haystack: the string or source
 * @needle: the string to search
 * Return: returns pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (strlen(needle) == 0)
		return (needle);
	i = 0;
	while (*(needle + i) != '\0')
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			if (*(needle + i) == *(haystack + j))
				return ((haystack + j));
			j++;
		}
		i++;
	}
	return (NULL);
}
