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
	unsigned int size, len = (s2 == NULL) ? 0 : strlen(s2);
	char *ptr, *copy_ptr;

	if (n <= 0)
		return (NULL);
	if (n > len)
		n = len;
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	copy_ptr = ptr;

	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}

	for (size = 0; size < n && *s2; size++)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (copy_ptr);
}
