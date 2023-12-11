#include "search_algos.h"

/**
 *binary_search - Function searching for value in a sorted array of integers
 *	using Binary Search algorith
 *@array: pointer to the 1st element of the array to search
 *@size: The number of elements in the array
 *@value: The value to search for
 *
 *Return: index of the value or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}
