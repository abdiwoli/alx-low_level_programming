#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - function that searches substrings
 * @haystack: the string or source
 * @needle: the string to search
 * Return: returns pointer
 */
char *_strstr(char *haystack, char *needle) {
	int i, j, len;

	len = strlen(needle);
	if (len == 0)
		return haystack;

	i = 0;
	while (haystack[i] != '\0') {
		j = 0;
		while (needle[j] != '\0') {
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}

	return (NULL);
}
