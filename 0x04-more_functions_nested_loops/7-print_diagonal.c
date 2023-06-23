#include "main.h"

/**
 * space - function makes space
 * @n: takes int
*/
void space(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
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
			space(i);
			_putchar('\\');
			_putchar('\n');
		}
	}
}
