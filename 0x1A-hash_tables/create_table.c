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


hash_node_t* create_item(char* key, char* value)
{
    hash_node_t* item = (hash_node_t*) malloc(sizeof(hash_node_t));

    item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}


void insert_item(hash_table_t* table, hash_node_t* item)
{
	unsigned long int index = hash_djb2(item->key) % table->size;
	item->next = table->array[index];
	table->array[index] = item;
}

void look_up(char *key, hash_table_t *table)
{
    unsigned long hash = hash_djb2(key);
    int index = hash % table->size;

    // Get the linked list at the specified index
    hash_node_t *current = table->array[index];

    // Traverse the linked list and check if the key exists
    while (current != NULL) {
        if (strcmp(key, current->key) == 0)
	{
            printf("Key '%s' found with value: %s\n", key, current->value);
            return;
        }
        current = current->next;
    }

    // Key was not found in the linked list
    printf("Key '%s' not found\n", key);
}

void print_table(hash_table_t *table)
{
    for (unsigned long int i = 0; i < table->size; i++) {
        hash_node_t *current = table->array[i];
        while (current != NULL) {
            printf("Key: %s, Value: %s\n", current->key, current->value);
            current = current->next;
        }
    }
}
