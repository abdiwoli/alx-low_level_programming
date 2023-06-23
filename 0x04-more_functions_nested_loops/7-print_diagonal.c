#include "main.h"
/**
 * print_diagonal - prints n * dashes
 * @n: int paramater
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			if (i == n)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
