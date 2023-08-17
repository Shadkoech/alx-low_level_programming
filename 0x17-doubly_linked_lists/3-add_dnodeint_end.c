#include "lists.h"

/**
 *add_dnodeint_end - Function adding a newnode at the end of a DLL
 *@head: head-pointer to the list
 *@n: data to be fed into the newlist
 *
 * Return: Address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		newnode->prev = temp;
		temp->next = newnode;

		return (newnode);
	}
}
