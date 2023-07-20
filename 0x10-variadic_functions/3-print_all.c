#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints every thing
 * @format: the format
 * @...: arguments
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char const *f = format;

	va_start(list, format);
	while (*f)
	{
		switch (*f)
		{
		case 'c':
			printf("%c%s", va_arg(list, int), *(f + 1) != '\0' ? ", " : "\n");
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), *(f + 1) != '\0' ? ", " : "\n");
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), *(f + 1) != '\0' ? ", " : "\n");
			break;
		case 's':
			printf("%s%s", va_arg(list, char *), *(f + 1) != '\0' ? ", " : "\n");
			break;
		default:
			break;
		}
		f++;
	}
	va_end(list);
}
