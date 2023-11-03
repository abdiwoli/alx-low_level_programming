#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * key_index - function returns index
 * @key: the key
 * @size: the array side
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash = hash_djb2(key);
	int index = hash % size;

	return (hash);
}
