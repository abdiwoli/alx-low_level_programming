#include "main.h"
#include <unistd.h>
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, &(*s), 1);
		s++;
		_puts_recursion(s);
	}
	else
	{
		char c = '\n';

		write(1, &c, 1);
	}
}
