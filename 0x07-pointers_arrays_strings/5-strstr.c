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
	int i, j, len;

	len = strlen(needle);
	if (len == 0)
		return (needle);
	i = 0;
	while (*(needle + i) != '\0')
	{
		j = 0;
		while (*(haystack + j) != '\0')
		{
			int k;

			if (*(needle + i) == *(haystack + j))
			{
				for (k = 0; k < len; k++)
				{
					if (*(needle + i + k) != *(haystack + j + k))
						break;
				}
				if (k == len)
					return (haystack + j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
