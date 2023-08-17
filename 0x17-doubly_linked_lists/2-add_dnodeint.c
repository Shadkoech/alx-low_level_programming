#include "lists.h"

/**
 *add_dnodeint - Function adding a node at the begining of a list
 *@head: head-pointer to the list
 *@n: data for the newnode
 *
 *Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t *));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n; /*putting data into newnode*/
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}

	*head = newnode;

	return (newnode);
}
