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
	hash_node_t *aux;
	hash_node_t *hash_node;
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;
	if (!(ht->array[idx]))
	{
		ht->array[idx] = hash_node;
		return (1);
	}
	else
	{
		aux = ht->array[idx];
		while (aux)
		{
			if (strcmp(ht->array[idx]->key, key) == 0)
			{
				ht->array[idx]->value = strdup(value);
				return (1);
			}
			aux = aux->next;
		}
		hash_node->next = ht->array[idx];
		ht->array[idx] = hash_node;
		return (1);
	}
	return (0);
}
