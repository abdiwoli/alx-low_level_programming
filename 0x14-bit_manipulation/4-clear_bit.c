#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function sets 1 bit
 * @n: the pointer to n
 * @index: index to set
 * Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1ul << index);
	if (n)
		return (1);
	return (-1);
}
