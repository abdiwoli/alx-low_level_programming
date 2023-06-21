#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n takes n as int
*/

void print_to_98(int n)
{
	int one, two;

	for (; n < 98? n < 98: n > 98;  n > 98 ? n--: n++)
	{
	        two = n % 10;
		one = n / 10;
		if (n > 9)
		      _putchar(one + '0');
		_putchar(two + '0');
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
