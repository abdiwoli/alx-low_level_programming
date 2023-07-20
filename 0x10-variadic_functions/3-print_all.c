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
	char *s = ", ", *str;
	int i = 0;;

	va_start(list, format);
	while (*f && format[i])
	{
		i++;
		if (*(f + 1) == '\0')
			s = "";
		switch (*f)
		{
		case 'c':
			printf("%c%s", va_arg(list, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), s);
			break;
		case 's':
			str = va_arg(list, char *);
			if (str)
			{
				printf("%s%s", str, s);
				break;
			}
			str = "(nil)";
			printf("%s%s", str, s);
			break;
		default:
			break;
		}
		f++;
	}
	va_end(list);
	printf("\n");
}