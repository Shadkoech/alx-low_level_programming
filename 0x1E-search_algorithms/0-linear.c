#include "search_algos.h"

/**
 *linear_search - Function searching for a value in an array using linear
 *	search algorithm
 *@array: pointer to 1st element of the array to be searched
 *@size: The number of elements in the array
 *@value: The value to search for in the array
 *
 * Return: index of the value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
