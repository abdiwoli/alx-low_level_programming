#include "main.h"
/**
 * cap_string - a function that changes all lowercase
 * @s: sting
 * Return: retuns char string
 */
char *cap_string(char *s)
{
	char *tmp = s;
	int capitalize_next = 1;

	while (*tmp != '\0')
	{
		if (capitalize_next && (*tmp >= 'a' && *tmp <= 'z'))
		{
			*tmp = *tmp - 32;
		}

		capitalize_next = 0;

		if (*tmp == ' ' || *tmp == '\t' || *tmp == '\n')
		{
			capitalize_next = 1;
		}

		if (*tmp == '\t')
		{
			*tmp = ' ';
			capitalize_next = 1;
		}

		tmp++;
	}

	return (s);
}


