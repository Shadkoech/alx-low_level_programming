#include "lists.h"

/**
  *free_listint2 - function that frees a list
  *@head: head pointer to our linked list
  *
  *Return: nothing/void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	temp = *head;

	while (temp != 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	 *head = NULL;
}
