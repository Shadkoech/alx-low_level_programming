#include "lists.h"

/**
  *print_listint - function  that prints elements in a list
  *@h: the head pointer to the linked list
  *
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t nodecount;

	nodecount = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
