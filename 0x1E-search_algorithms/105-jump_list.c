#include "search_algos.h"


/**
 *jump_list - function searching for a value in a sorted list using
 *      jump search algorith
 *@list: pointer to the head of the linked list to search
 *@size: Number of nodes in the linked list
 *@value: The value to search in the LL
 *
 *Return: pointer to the first node where value is located, NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0;
	size_t step_size = sqrt(size);
	listint_t *curr, *jump;

	if (list == NULL)
		return (NULL);

	curr = jump = list;

	for (; jump->index + 1 < size && jump->n < value;)
	{
		curr = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			curr->index, jump->index);

	for (; curr->index < jump->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
