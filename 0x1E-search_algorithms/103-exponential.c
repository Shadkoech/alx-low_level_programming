#include "search_algos.h"

/**
 * binary_search_exp - Function searching a value in a sorted array of integers
 * using Binary Search algorithm
 * @array: pointer to the 1st element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search
 *
 * Return: index of the value or -1 on failure
 */
int binary_search_exp(int *array, size_t size, int value)
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

/**
 * exponential_search - Function searching for a value in a sorted array using
 * exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The Number to search for
 *
 * Return: First index of the value; -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, index = 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)index, array[index]);
		index *= 2;
	}

	start = index / 2;
	if (index < size - 1)
		end = index;
	else
		end = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)start, (unsigned long)end);
	return (binary_search_exp(array, size, value));
}
