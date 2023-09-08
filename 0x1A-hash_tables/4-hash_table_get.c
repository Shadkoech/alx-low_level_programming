#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated
 *		with key from a hash table
 *@ht: The hash table to retrieve a value from
 *@key: The key to the value to be retrived
 *
 *Return: value associated with the element(key)
 *	or NULL is the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	/**
	 * so we first get the index of key using the hashing fxn
	 *	and access current node in LL.
	 * we traverse the linked LL until out key matches using strcmp fxn
	 * When similar, we return the value by accessing data in node
	 */

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
