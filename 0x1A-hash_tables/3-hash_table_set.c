#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_item - function creates item or node
 * @key: the key
 * @value: the value
 * Return: node
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}

/**
 * hash_table_set - function sets value of item
 * @key: key
 * @value: value
 * @ht: table
 * Return: 1 for success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);
	current =  ht->array[index];
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	item = create_item(key, value);
	if (item == NULL)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
