#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_print - function prints hash table
 * @table: the table to print
 */

void hash_table_delete(hash_table_t *table)
{
	hash_node_t *current, *temp;
	unsigned long int i;

	if (table == NULL)
		return;
	for (i = 0; i < table->size; i++)
	{
		current = table->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(table->array);
	free(table);
}
