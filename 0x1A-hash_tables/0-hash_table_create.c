#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;

	if (size == 0)
		return (NULL);

	hashtable = calloc(1, sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;

	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}