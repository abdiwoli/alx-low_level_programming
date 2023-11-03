#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_get - function searches the key
 * @ht: the table
 * @key: the ke to find
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);


	if (ht == NULL || key == NULL)
		return (NULL);
	if (!(ht->array[index]))
		return (NULL);
	return (ht->array[index]->value);
}
