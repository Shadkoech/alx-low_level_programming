#include "lists.h"

/**
  *find_listint_loop - pointer function that finds a loop in a linked list
  *@head: a pointer to the linklist to be found
  *
  *Return: Address of the node, where the loop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *quick, *slow;

	quick = slow = head;

	if (head == NULL)
		return (NULL);

	while (quick && quick->next)
	{
		quick = quick->next->next;
		slow = slow->next;

		if (quick == slow)
		{
			slow = head;

			while (slow != quick)
			{
				slow = slow->next;
				quick = quick->next;
			}

			return (quick);
		}
	}

	return (NULL);
}
