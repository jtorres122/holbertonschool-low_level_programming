#include "hash_tables.h"

/**
 * hash_table_set - functions adds an element to the hash table
 * @ht: hash table to be added or updated
 * @key: is the key. Cannot be an empty string
 * @value: value associated with the key. Must be duplicated
 * and can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = key_index((const unsigned char *) key, ht->size);

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
