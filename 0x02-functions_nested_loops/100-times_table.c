#include "main.h"
#include <stdio.h>

/**
 * spaceComa - prints comma and space
 */
void spaceComa(void)
{
	putchar(',');
	putchar(' ');
}
void spaces(char arr[])
{
	for (int i = 0; i < 3; i++)
		putchar(arr[i];
}

/**
 * print_times_table - prints the times table up to the given number
 *@num: takes int
 */
void print_times_table(int num)
{
	int n2, i, n3, n, n4;
	char arr[];

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
		spaceComa();
		for (n = 1; n <= num; n++)
		{
			n2 = (n * i);
			n2 > 99 ? arr = {1 + '0', ((n2 / 10) % 10) + '0', n2 % 10} : ;
			if (n2 > 99)
			{
				n4 = (n2 / 10) % 10;
				n3 = n2 % 10;
				n2 = 1;
				spaces(arr);
//				putchar(n2 + '0');
//				putchar(n4 + '0');
//				putchar(n3 + '0');
			}
			else if (n2 > 9)
			{
				putchar(' ');
				n3 = n2 / 10;
				n2 = n2 % 10;
				putchar(n3 + '0');
			}
			else
			{
				putchar(' ');
				putchar(' ');
			}
			putchar(n2 + '0');
			if (n != num)
				spaceComa();
		}
		putchar('\n');
	}
}
