#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n takes n as int
*/

void print_to_98(int n)
{
	int one, two;

	for (; n < 99; n++)
	{
		one = n / 10;
		two = n % 10;
		if (n < 10)
			_putchar(' ');
		else
			_putchar(two + '0');
		_putchar(one + '0');
		if (n < 98)
		_putchar(',');
	}
	_putchar('\n');
}
