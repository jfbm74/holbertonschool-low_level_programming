#include "hash_tables.h"
/**
 * key_index -  function that returns the index of a key.
 * @key: Key
 * @size: is the size of the array of the hash table
 * Return: Index of a key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	if (key == NULL || size == 0)
		return (0);
	idx = hash_djb2(key) % size;
	return (idx);
}
