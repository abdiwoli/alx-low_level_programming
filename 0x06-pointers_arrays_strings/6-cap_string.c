#include "main.h"
/**
 * cap_string - a function that changes all lowercase
 * @s: sting
 * Return: retuns char string
 */
char *cap_string(char *s)
{
	char *tmp = s;
	char t;
	int capitalize_next = 1;

	while (*tmp != '\0')
	{
		if (capitalize_next && (*tmp >= 'a' && *tmp <= 'z'))
		{
			*tmp = *tmp - 32;
		}

		capitalize_next = 0;
		t = *tmp;
		if (*t == ' ' || *t == '\t' || *t == '\n' || *t == '.' || *t == ',' ||
		    *t == '!' || *t == '?')
		{
			capitalize_next = 1;
		}
		tmp++;
	}

	return (s);
}


