#include "hash_tables.h"


/**
 *hash_table_create - A function that creates a hash table
 *@size: Size of the hash table array to be created
 *
 *Return: A pointer to created table of NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;


	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		return (NULL);
	}

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}

	return (hashtable);
}
