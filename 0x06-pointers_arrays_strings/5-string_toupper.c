#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * @s: sting
 * Return: retuns char string
 */
char *string_toupper(char *s)
{
	char *tmp = s;

	while (*tmp != '\0')
	{
		if (*tmp >= 'a' && *tmp <= 'z')
		*tmp = *tmp - 32;
		tmp++;
	}
	return (s);

}
