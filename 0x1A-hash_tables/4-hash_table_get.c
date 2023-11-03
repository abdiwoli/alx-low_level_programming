#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_get - function searches the key
 * @ht: the table
 * @key: the ke to find
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);

	if (ht == NULL || key == NULL)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
