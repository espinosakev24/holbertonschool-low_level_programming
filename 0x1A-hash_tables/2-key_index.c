#include "hash_tables.h"
/**
 * key_index - Turns a big number into a small number
 * @size: hash table size
 * @key: the key of the node hash
 * Return: A number smaller than the key converted
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n = 0;

	if (key == NULL)
		return (0);
	if (size <= 0)
		return (0);
	n = hash_djb2(key);
	return (n % size);
}
