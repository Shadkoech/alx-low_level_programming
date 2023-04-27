#include "lists.h"

/**
  *list_len - Returns the no of element from a linked list
  *@h: pointer to the head of the linked list
  *
  *Return: total number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
