#include "lists.h"

/**
  *insert_nodeint_at_index - Function that inserts a newnode at a certain point
  *@head: the pointer to our linked list
  *@idx: the index of the list where the node should be added
  *@n: the data to input the new node
  *
  *Return: address of newnode or NULL if failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int pos = 1;

	temp = *head;

	if (idx != 0)
	{
		while (pos < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			pos++;
		}
	}

	if (temp == 0 && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}

	else
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}


