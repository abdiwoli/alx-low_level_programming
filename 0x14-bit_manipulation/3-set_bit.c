#include "main.h"
#include <stdlib.h>
/**
 * set_bit - function sets 1 bit
 * @n: the pointer to n
 * @index: index to set
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1ul;

	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (one << index);

	return (1);
}
