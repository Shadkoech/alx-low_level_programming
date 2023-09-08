#include "hash_tables.h"


/**
 *key_index - Function that gives back the index of a key
 *@key: pointer to the key
 *@size: size of the hashtable array
 *
 *Return: index where particular key/index should
 *	be stored in hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashcode;
	unsigned long int index;

	hashcode = hash_djb2(key);
	index = hashcode % size;

	return (index);
}
