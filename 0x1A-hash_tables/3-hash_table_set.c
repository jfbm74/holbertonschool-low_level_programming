#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: 	hash table you want to add or update the key/value to
 * @key: 	is the key. key can not be an empty string
 * @value:  	is the value associated with the key. value must be duplicated.
 * 		value can be an empty string
 * 
 * Return: 	1 if it succeeded, 0 otherwise
 * */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new ==NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);


	/* Insert New Node*/
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;
	ht->array[idx] = new; 

	return (1);
}
