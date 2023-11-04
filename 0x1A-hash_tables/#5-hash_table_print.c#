#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print - function prints hash table
 * @table: the table to print
 */

void hash_table_print(const hash_table_t *table)
{
	hash_node_t *current;
	unsigned long int i, printed = 0;

	if (table == NULL)
		return;
	printf("{");
	for (i = 0; i < table->size; i++)
	{
		current = table->array[i];
		while (current != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			printed = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
