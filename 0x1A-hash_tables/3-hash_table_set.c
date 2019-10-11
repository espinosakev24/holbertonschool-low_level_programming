#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: hash table size
 * Return: the new hash table just created
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	unsigned long int n;

	const char *own_key = strcpy(own_key, key);
	n = key_index(own_key, size);
	/*ht->array[n] = *value;*/
	return (1);
}
