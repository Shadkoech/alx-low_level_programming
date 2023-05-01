#include "lists.h"

/**
  *print_listint_safe - this program prints out a linked list
  *@head: pointer to the linked list to manipulate
  *
  *Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	int nodecount;

	nodecount = 0;

	if (head == NULL)
		return (98);

	while (head != NULL)
	{
		head = head->next;
		nodecount++;
	}

	return (nodecount);
}
