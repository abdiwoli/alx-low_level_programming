#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * @s: sting
 * Return: retuns char string
 */
char *cap_string(char *s)
{
	char *tmp = s;

	while (*tmp != '\0')
	{
		if (*tmp == ' ' || *tmp == '\t' || *tmp == '\n')
		{
			tmp++;
			if (*tmp >= 'a' && *tmp <= 'z')
				*tmp = *tmp - 32;
		}
		else
			tmp++;
	}
	if (*s >= 'a' && *s <= 'z')
		*s = *s + 32;
	return (s);

}
