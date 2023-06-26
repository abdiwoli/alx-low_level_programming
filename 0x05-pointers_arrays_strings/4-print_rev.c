# include "main.h"
/**
 * print_rev -  prints string of the param
 * @s: string pram
 *
 */
void print_rev(char *s)
{
	char *st;

	st = s;
	while (*s != '\0')
		s++;
	s--;
	while (s >= st)
	{
		_putchar(*s);
		s--;
	_putchar('\n');
}

