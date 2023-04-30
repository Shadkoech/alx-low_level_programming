#include "lists.h"

/**
  *sum_listint - function that return sum of data of a list
  *@head: pointer to the linked list
  *
  *Return: sum of data in n, 0 if empty
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
