#include "main.h"
#include <stdio.h>
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
		putchar(s[--i]);
	putchar('\n');
	
	
}
