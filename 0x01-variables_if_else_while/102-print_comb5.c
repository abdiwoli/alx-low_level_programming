#include <stdio.h>

/**
 * main - function prints two-digit combinations
 * Return: 0
 */
int main(void)
{
	int one, two;

	for (one = 0; one < 99; one++)
	{
		for (two = one + 1; two <= 99; two++)
		{
			putchar((one / 10) + '0');
			putchar((one % 10) + '0');
			putchar(' ');
			putchar((two / 10) + '0');
			putchar((two % 10) + '0');

			if (!(one == 98 && two == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
