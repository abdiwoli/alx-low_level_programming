#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_str_len - gets len
 * @s: string
 * Return: int len
 */
int get_str_len(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * str_concat - function that concatenates two string
 * @s1: the first string pomiter
 * @s2: the second string
 * Return: char poniter
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *ptr, *copy_ptr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = get_str_len(s1);
	len2 = get_str_len(s2);
	ptr = malloc((len1 + len2) * sizeof(char) + 1);
	copy_ptr = ptr;
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';

	return (copy_ptr);
}
