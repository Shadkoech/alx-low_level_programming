#include "lists.h"

/**
  *print_list - prints all the elements of a list
  *@h: Pointer to the header of the linked list that we wish to print
  *
  *Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t node_count;

	node_count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		node_count++;
	}
	return (node_count);
}
