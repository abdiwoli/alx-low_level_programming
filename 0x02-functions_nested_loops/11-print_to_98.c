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
	int one, two, three;
	int f;

	n > 98 ? f = 1 : 0;
	while (n <= 98 || n >= 99)
	{
	        two = _abs( n) % 10;
		one = _abs(n) / 10;
		if (n < 0){
                    _putchar('-');
                }
		if(_abs(one)>9)
		{
			three = one / 10;
			one %= 10;
			_putchar(three + '0');
		}
		if (_abs(n) > 9)
		      _putchar(one + '0');
		_putchar(two + '0');
		if (n < 98 || n > 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n == 98)
			break;
		n > 98 ? n--: n++;
	}
	_putchar('\n');
}
