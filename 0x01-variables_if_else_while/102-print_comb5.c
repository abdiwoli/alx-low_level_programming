#include <stdio.h>

/**
 * main - function prints two-digit combinations
 * Return: 0
 */
int main(void)
{
	int one, two, f, d1, d2;

	f = 0;
	for (one = 0; one < 99; one++)
	{
		for (two = one + 1; two <= 99; two++)
		{
			if (one < 10)
			{
				putchar(f + '0');
				putchar(one + '0');
			}
			else
			{
				d1 = one / 10;
				d2 = one % 10;
				putchar(d1 + '0');
				putchar(d2 + '0');
			}
			putchar(',');
			putchar(' ');
			if (two < 10)
			{
				putchar(one + '0');
				putchar(two + '0');
			}
			else
			{
				d1 = two / 10;
				d2 = two % 10;
				putchar(d1 + '0');
				putchar(d2 + '0');
			}

			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
