#include "hash_tables.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * hash_table_create - function name
 * @size: the size of the table
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long i;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
