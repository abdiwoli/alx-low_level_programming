#include "main.h"
/**
 * recursion_help - recursive function helps to print
 * @s: string to print
 */
void recursion_help(char *s)
{
	if (*s != '\0' && *s != '\n')
	{
		_putchar(*s);
		s--;
		recursion_help(s);
	}
	else
		_putchar(*s);
}
/**
 * _print_rev_recursion - string in reverse
 * @s: the string to print
 */

void  _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		s--;
		recursion_help(s);
	}
}
