#include "lists.h"

/**
  *listint_len - returns the number of elements in a list
  *@h: head pointer to the linked list
  *
  *Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
