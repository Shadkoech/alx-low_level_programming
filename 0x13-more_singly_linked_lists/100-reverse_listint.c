#include "lists.h"

/**
  *reverse_listint - a function that reverses as linked list
  *@head: a pointer to the L.List in memory
  *
  *Return: pointer to the first node of the reversed string
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	prevnode = 0;

	while (*head != 0)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}

	*head = prevnode;
	return (*head);
}

