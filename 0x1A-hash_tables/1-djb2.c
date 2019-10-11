#include "hash_tables.h"
/**
 * hash_djb2 - function that takes a string and gets a numeric value
 * @str: string to convert in a number
 * Return: The numeric value of str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
