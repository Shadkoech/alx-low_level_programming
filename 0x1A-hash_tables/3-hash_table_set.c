#include "hash_tables.h"


/**
 *hash_table_set - A function that adds an element to the hash table
 *@ht: Pointer to hashtable to actually add an element to
 *@key: key to the value to be added
 *@value: data associated to the key
 *
 *Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long index;
	char *valuecopy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/*getting the index using the key_index function*/
	index = key_index((const unsigned char *)key, ht->size);

	/*creating newnode for the key/value pair*/
	newnode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	/*duplicate the value*/
	valuecopy = strdup(value);
	if (valuecopy == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->key = strdup(key);  /*duplicate key*/
	if (newnode->key == NULL)
	{
		free(newnode);
		free(valuecopy);
		return (0);
	}
	newnode->value = valuecopy;
	newnode->next = NULL;
	/*check if buckey is empty*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	else  /*collision happened*/
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}
