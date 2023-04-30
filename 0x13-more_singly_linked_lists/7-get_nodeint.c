#include "lists.h"

/**
  *get_nodeint_at_index - pointer function that retunrs nth node
  *@head: - pointer to the link list to work on
  *@index: the counter to reiterate the nodes
  *
  *Return: the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodecount;

	nodecount = 0;
	while (head != 0)
	{
		if (nodecount == index)
			return (head);
		head = head->next;
		nodecount++;
	}

	return (NULL);
}
