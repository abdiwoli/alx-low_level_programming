#include "main.h"
#include <stdio.h>

/**
 * abdi - gets lenstr
 *@s: string param
 * Return: int value
 */

int abdi(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * rev_string - reverses the string string param
 */
void rev_string(char *s)
{
	int i;

	i = abdi(s);
	while (i >= 0)
		printf("%c", s[--i]);
	putchar('\n');
}
