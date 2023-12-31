#include "main.h"
#include <stdio.h>
#include<limits.h>
/**
 * print_binary - function prints binary
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1ul << (sizeof(unsigned long int) * CHAR_BIT - 1);
	unsigned long int p = 0, i, bit = 0;

	for (i = 0; i < (sizeof(unsigned long int) * CHAR_BIT); i++)
	{
		bit = (n & mask) ? 1 : 0;
		if (bit == 1)
			p = 1;
		if (p)
			_putchar(bit + '0');
		mask >>= 1;
	}
	if (p == 0)
		_putchar(0 + '0');
}
