#include "main.h"
/**
 * useless - lessputcharuse
 * @c: char param
 */
void useless(int c)
{
	_putchar(c + '0');
}
/**
 * more_numbers - prints n * 10
*/

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
				useless(n);
			else
			{
				useless(n / 10);
				useless(n % 10);
			}
		}
		_putchar('\n');
	}
}
