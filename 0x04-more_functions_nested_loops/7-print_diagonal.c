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
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
