#include "hash_tables.h"

/**
 * key_index - give index of key
 * @key: key
 * @size: size of hash table
 * Return: index that has key/value pair
 * and stored in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
