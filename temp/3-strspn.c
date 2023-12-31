#include "main.h"
#include <string.h>
/**
 * _strspn - function gets length
 * @s: string pointer
 * @accept: another string
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s != '\0')
	{
		const char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				n++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}

	return (n);
}
