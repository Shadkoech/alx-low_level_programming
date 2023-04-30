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
	int firstnode;

	temp = *head;
	firstnode = 0;
	if (*head == NULL)
	{
		return (firstnode);
	}

	*head = (*head)->next;
	firstnode = temp->n;
	free(temp);

	return (firstnode);
}
