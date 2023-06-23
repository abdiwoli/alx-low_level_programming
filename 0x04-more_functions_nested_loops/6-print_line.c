#include "main.h"
/**
 * print_line - prints n * dashes
 * @n: int paramater
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('-');
			n--;
		}
		putchar('\n');
	}
}
