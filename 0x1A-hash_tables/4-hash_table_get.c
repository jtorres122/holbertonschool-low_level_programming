#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 * @ht: parameter ht is the hash table function will look into
 * @key: parameter key is the key function is looking for
 * Return: value associated with element or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node = ht->array[index];

	for (idx = 0; idx < size; idx++)
	{
		if (node != NULL)
			if (strcmp(key, node->key) == 0)
				return (node->value);
	}

	return (NULL);
}
