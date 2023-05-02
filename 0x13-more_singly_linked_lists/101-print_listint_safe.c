#include "lists.h"

/**
  *print_listint_safe - this program prints out a linked list
  *@head: pointer to the linked list to manipulate
  *
  *Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;

			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				count++;
			}

			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
	}
	return (count);
}
