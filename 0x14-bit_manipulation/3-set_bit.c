#include "main.h"
/**
 * set_bit - function sets 1 bit
 * @n: the pointer to n
 * @index: index to set
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1 << index);
	if (n)
		return (1);
	return (-1);
}
