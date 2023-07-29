#include <stdio.h>
#include "lists.h"
void print_message(void) __attribute__((constructor));
/**
 * print_message - function prints mesage before main function
 */
void print_message(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	while (*str)
	{
		putchar(*s);
		str++;
	}
}
