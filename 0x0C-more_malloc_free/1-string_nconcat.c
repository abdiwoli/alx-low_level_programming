#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function conconates two string
 * @s1: firts string
 * @s2: second string
 * @n: the size to conconate
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, len, len1, len2;
	char *ptr, *copy_ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	n = (n > len2) ? len2 : n;
	len = n + len1;
	if (len == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * (len + 1));
	copy_ptr = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	for (size = 0; size < n; size++)
	{
		*ptr = *s2;
		s2++;
		ptr++;
	}

	*ptr = '\0';
	return (copy_ptr);
}
