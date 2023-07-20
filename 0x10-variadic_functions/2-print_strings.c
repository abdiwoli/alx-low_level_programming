#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints all arguments of strings
 * @separator: the sep between words
 * @n: number of arguments
 * @...: arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *s = separator;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%s %s", va_arg(list, char*), s != NULL && i < n - 1 ? s : "\n");
	}
	va_end(list);
}
