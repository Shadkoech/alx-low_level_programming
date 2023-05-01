#include "lists.h"

/**
  *delete_nodeint_at_index - Function that deletes a node at a given position
  *@head: a pointer to the linked list
  *@index: the position of the node to be deleted
  *
  *Return: 1 on success and -1 on error
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *holdernode;
	unsigned int pos;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (pos < index - 1)
	{
		temp = temp->next;
		pos++;
	}

	holdernode = temp->next;
	temp->next = holdernode->next;
	free(holdernode);

	return (1);
}

