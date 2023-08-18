#include "lists.h"


/**
 *insert_dnodeint_at_index - Function inserting node at an index
 *@h: head pointer to the start of the list
 *@idx: The positional index to insert the node
 *@n: the data to feed into the inserted node
 *
 *Return: Address of the newnode and failure otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int position = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	temp = *h;

	while (temp != NULL && position < idx - 1)
	{
		temp = temp->next;
		position++;
	}

	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
