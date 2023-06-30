#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - prints digit
 */

void print_number(int n)
{
	int count = 0;
	int i, number, f, sign;
	char *s;

	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	f = n;
	if (n > 0)
	{
		while (f > 0)
		{
			count++;
			f /= 10;
		}
		number = count;
		s = (char *)malloc((count + 1) * sizeof(char));
		while (count >= 1)
		{
			count--;
			s[count] = n % 10 + '0';
			n /= 10;
		}
		if (sign < 0)
			_putchar('-');
		for (i = 0; i < number; i++)
		{
			_putchar(s[i]);
		}
		free(s);
	}
	else
		_putchar('0');
}
