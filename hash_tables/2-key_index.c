#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: key to pass
 *
 * @size: size of the array of hash table
 *
 * Return: returns an index to where the key is stored
*/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
