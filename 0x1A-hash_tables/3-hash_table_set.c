#include "hash_tables.h"
/**
 * hash_table_set - function that creates a hash table
 * @ht: hash table
 * @key: hash table size
 * @value: value
 * Return: the new hash table just created
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	ht->array[idx] = hash_node;
	printf("%s", hash_node->key);
	return (1);
}
