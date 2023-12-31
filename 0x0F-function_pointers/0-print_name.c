#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints name
 * @name: the name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
