#include "lists.h"

/**
 *get_dnodeint_at_index - Funtion returning nth node of a linked list
 *@head: head-pointer to the LL
 *@index: the index of the node to be returned
 *
 *Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int position = 0;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		if (position == index)
		{
			return (temp);
		}

		temp = temp->next;
		position++;
	}

	return (NULL);
}
