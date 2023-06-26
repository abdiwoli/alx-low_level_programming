#include "main.h"
/**
 * puts_half - puts half string
 * @str: string param
 */

void puts_half(char *str)
{
	int i, n, l;
	char *st;

	i = 0;
	st = str;
	while (*st != '\0')
	{
		i++;
		st++;
	}
	l = (i % 2 == 0) ? (i/2) : (i - 1) / 2;

	for (n = l; n < i; n++)
		_putchar(str[n]);
	_putchar('\n');
	
}
