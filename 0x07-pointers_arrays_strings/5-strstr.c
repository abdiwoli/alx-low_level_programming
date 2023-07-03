#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strstr - function that searches strings
 * @haystack: the string or source
 * @needle: the string to search
 * Return: returns pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = strstr(haystack, needle);

	return ((p != NULL) ? p : NULL);
}
