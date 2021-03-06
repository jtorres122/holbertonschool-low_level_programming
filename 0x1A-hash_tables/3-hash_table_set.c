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
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *aux_node = NULL;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	aux_node = ht->array[index];
	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
		{
			free(aux_node->value);
			aux_node->value = strdup(value);
			return (1);
		}
		aux_node = aux_node->next;
	}

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
