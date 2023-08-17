#include "lists.h"

/**
 *print_dlistint - Function printing all elements of a list
 *@h: head-pointer to the linked list
 *
 *Return: number of nodes of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_count++;
	}

	return (node_count);
}
