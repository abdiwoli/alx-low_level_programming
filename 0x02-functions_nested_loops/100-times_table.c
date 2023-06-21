#include "main.h"
#include <stdio.h>
void spaceComa()
{
        putchar(',');
        putchar(' ');
}

/**
 * print_times_table - prints table
*/

void print_times_table(int num)
{
	int  n2, i, n3, n;

        n2 = 0;
        for (i = 0; i < num; i++)
        {
                putchar(0 + '0');
                spaceComa();
                for (n = 1; n <= num; n++)
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
