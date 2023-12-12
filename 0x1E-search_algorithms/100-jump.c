#include "search_algos.h"

/**
 *jump_search - Function searching for value in sorted array of integers
 *	using jump search algorithm
 *@array: Pointer to the 1st element in the array
 *@size: number of elements in the array
 *@value: The number to search
 *
 *Return: First index of value or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index, prev, step;

	prev = 0;
	step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (array[prev] < value)
	{
		prev += step;
		if (prev >= size)
		{
			printf("Value checked array[%ld] = [%d]\n",
				prev - step, array[prev - step]);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", prev - step, array[prev - step]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);
	for (index = prev - step; index <= size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}

	return (-1);
}
