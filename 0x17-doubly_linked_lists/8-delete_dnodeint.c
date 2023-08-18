#include "lists.h"

/**
 *delete_dnodeint_at_index - Function deleting a node at given index
 *@head: head pointer to the beginning of the list
 *@index: the position to perform the deletion
 *
 *Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int position = 0;
	dlistint_t *nextnode = NULL;
	dlistint_t *priornode = NULL;

	temp = (*head);

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (position == index)
		{
			nextnode = temp->next;
			priornode = temp->prev;
			if (priornode != NULL)
			{
				priornode->next = nextnode;
			}
			else
			{
				*head = nextnode;
			}

			if (nextnode != NULL)
			{
				nextnode->prev = priornode;
			}

			free(temp);
			return (1);
		}
		temp = temp->next;
		position++;
	}
	return (-1);
}

