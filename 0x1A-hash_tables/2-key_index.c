#include "hash_tables.h"

/**
 * key_index - This gets the index at which a hash pair should
 *             be stored in a hash table array.
 * @key: The key to get the index.
 * @size: The size of the hash table array.
 *
 * Return: The key index.
 *
 * Description: This function uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
