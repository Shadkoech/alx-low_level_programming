#include "lists.h"

/**
  *pop_listint - A function that deletes the headnode
  *@head: a pointer to our linked list
  *
  *Return: the head's node data or NULL if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == 0)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (temp->n);
}
