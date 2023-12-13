#include "search_algos.h"


/**
 *jump_list - function searching for a value in a sorted list using
 *	jump search algorith
 *@list: pointer to the head of the linked list to search
 *@size: Number of nodes in the linked list
 *@value: The value to search in the LL
 *
 *Return: pointer to the first node where value is located, NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *current = list;
	listint_t *prev = NULL;
	size_t i;

	if (list == NULL)
		return (NULL);

	while (current && current->n < value)
	{
		prev = current;
		for (i = 0; current && i < jump; i++)
		{
			current = current->next;
		}
		if (current)
		{
			printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		}
	}

	while (prev && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	if (!prev || prev->n > value)
	{
		if (current)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					prev->index, current->index);
		}
		return (NULL);
	}
	if (prev->n == value)
		return (prev);

	return (NULL);
}
