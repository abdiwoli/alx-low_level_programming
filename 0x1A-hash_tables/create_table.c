#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

hash_table_t* create_table(int size)
{
    // Creates a new HashTable.
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    table->size = size;
    table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));

    for (int i = 0; i < table->size; i++)
        table->array[i] = NULL;

    return table;
}

unsigned long hash_djb2(unsigned char *str)
{
	unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}





void insert_item(hash_table_t* table, hash_node_t* item)
{
	unsigned long int index = hash_djb2(item->key) % table->size;
	item->next = table->array[index];
	table->array[index] = item;
}
