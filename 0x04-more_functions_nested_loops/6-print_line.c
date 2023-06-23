#include "main.h"
/**
 * print_line - prints n * dashes
 * @n: int paramater
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n');
}
