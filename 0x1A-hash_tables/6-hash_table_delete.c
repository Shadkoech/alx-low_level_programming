#include "hash_tables.h"



/**
 *hash_table_delete - Function deleting a hash table
 *@ht: the hash_table to delete
 *
 *Return: Nothing (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int x;


	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		/*array[0] is the first node which you will point the current*/
		current = ht->array[x];
		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}

	free(ht->array);
	free(ht);
}
