#include <stdio.h>

/**
 * spaceComa - prints comma and space
 */
void spaceComa(void)
{
	putchar(',');
	putchar(' ');
}

/**
 * times_table - prints 9 table
 */

void times_table(void)
{
	int n, n2, i, n3;

	n2 = 0;
	for (i = 0; i < 10; i++)
	{
		putchar(0 + '0');
		spaceComa();
		for (n = 1; n <= 9; n++)
		{
			n2 = (n * i);
			if (n2 > 9)
			{
				n3 = n2 / 10;
				n2 = n2 % 10;
				putchar(n3 + '0');
				putchar(n2 + '0');
			}
			else
			{
				putchar(' ');
				putchar(n2 + '0');
			}
			if (n != 9)
				spaceComa();
		}
		putchar('\n');
	}
}
