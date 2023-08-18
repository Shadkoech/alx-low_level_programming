#include "lists.h"

/**
 *sum_dlistint - Function returning the sum of all data in a list
 *@head: the head-pointer to the start of the list
 *
 *Return: 0 is the list is empty and sum otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	if (head == 0)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
