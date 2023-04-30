#include "lists.h"

/**
  *add_nodeint - Function that adds a node at the beginning of a list
  *@head: head pointer of the linked list
  *@n: the int data to add to the newnode
  *
  *Return: address to the newnode
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;


	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
