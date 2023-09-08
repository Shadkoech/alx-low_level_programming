#include "hash_tables.h"


/**
 *hash_table_print - Function that prints a hash table in the order
 *@ht: The hash table to actually print
 *
 *Return: The table printout or Nothing if ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned char comma_needed = 0;
	unsigned long int i;

	if (ht == NULL)
		return;  /*don*t print anything*/

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_needed == 1)
				printf(", ");

			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->key);
				temp = temp->next;

				if (temp != NULL)
					printf(", ");
			}
			comma_needed = 1;
		}
	}
	printf("}\n");
}
