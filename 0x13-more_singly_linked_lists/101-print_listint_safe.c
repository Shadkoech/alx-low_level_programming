#include "lists.h"

/**
  *print_listint_safe - this program prints out a linked list
  *@head: pointer to the linked list to manipulate
  *
  *Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count;

	count = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		temp = head;
		head = head->next;

		if (temp == head)
		{
			break;
		}
	}

	if (temp->next != NULL)
		printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);

	return (count);
}
