#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function prints numbers passed
 * @separator: string that seprates numbers
 * @n: number of arguments
 * @...: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL  && i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
