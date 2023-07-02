#include "main.h"
#include <stdio.h>

/**
 * spaceComa - prints comma and space
 * @a: char
 * @b: char
 * @c: char
 */
void spaceComa(char a, char b, char c)
{
	putchar(a);
	putchar(b);
	putchar(c);
}

/**
 * print_times_table - prints the times table up to the given number
 *@num: int param
 */
void print_times_table(int num)
{
	int n2, i, n3, n, n4;

	n2 = 0;
	for (i = 0; i <= num; i++)
	{
		if (num < 0 || num > 15)
			break;
		putchar(0 + '0');
		if (num == 0)
		{
			putchar('\n');
			break;
		}
		spaceComa(',', ' ', '');
		for (n = 1; n <= num; n++)
		{
			n2 = (n * i);
			if (n2 > 99)
			{
				n4 = (n2 / 10) % 10;
				n3 = n2 % 10;
				n2 = 1;
				spaceComa(n2 + '0', n4 + '0', n3 + '0');
			}
			else if (n2 > 9)
			{
				putchar(' ');
				n3 = n2 / 10;
				n2 = n2 % 10;
				putchar(n3 + '0');
				putchar(n2 + '0');
			}
			else
				spaceComa(' ', ' ', n2 + '0');
			if (n != num)
				spaceComa();
		}
		putchar('\n');
	}
}
