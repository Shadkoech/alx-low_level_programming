#include "lists.h"

/**
  *add_nodeint_end - Function that adds a node at the end
  *@head: the pointer to the linked list
  *@n: the int data to add to the newnode
  *
  *Return: address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;
	return (newnode);
}
