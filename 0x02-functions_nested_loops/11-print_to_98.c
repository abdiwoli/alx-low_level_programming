#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n takes n as int
*/

/**
 * _abs - gets the absolute number
 * Return: absolute int
 * @n: takes an int number
 * author abdiwoli
*/

int _abs(int n)
{
	return (n < 0 ? n * -1 : n > 0 ? n : 0);
}

void print_to_98(int n)
{
	int one, two;

	for (; n <=98;  n > 98 ? n--: n++)
	{
	        two = _abs( n) % 10;
		one = _abs(n) / 10;
		if (n < 0){
                    _putchar('-');
                }
		if (_abs(n) > 9)
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
