#include "main.h"
#include <stdio.h>
/**
 *  get_bit - function prints binary
 * @n: the number to convert
 * @index: the index
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int  mask;
	int bit;

	if (index >= 32)
		return (-1);
	mask = 1ul << index;
	bit = (n & mask) ? 1 : 0;
	return (bit);

}
