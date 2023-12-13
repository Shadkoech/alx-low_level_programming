#include "search_algos.h"


/**
 *linear_skip - function searching for a value in a sorted list using
 *      skip list algorith
 *@list: pointer to the head of the skip list to search
 *@value: The value to search in the LL
 *
 *Return: pointer to the first node where value is located, NULL otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *jump;

	if (list == NULL)
		return (NULL);

	curr = jump = list;

	for (; jump->next != NULL && jump->n < value;)
	{
		curr = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			curr->index, jump->index);

	for (; curr->index < jump->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
