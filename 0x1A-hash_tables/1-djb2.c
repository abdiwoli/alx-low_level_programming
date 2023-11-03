#include "hash_tables.h"

/**
 * hash_djb2 - function name
 * @str: the key
 * Return: index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int value = 5381;
	int n;

	n = *str++;
	while (n)
	{
		value = ((value << 5) + value) + n;
		n = *str++;
	}
	return (value);
}
