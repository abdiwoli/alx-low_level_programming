#include "main.h"
/**
 * more_numbers - prints n * 10
*/

void more_numbers(void)
{
	int i, n, n2, n1;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
				_putchar(n + '0');
			else
			{
				n1 = n % 10;
				n2 = n / 10;
				_putchar(n2 + '0');
				_putchar(n1 + '0');
			}
		}
		_putchar('\n');
	}
}
