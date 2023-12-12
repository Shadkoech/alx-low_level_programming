#include "search_algos.h"

/**
 *interpolation_search - function searching for a value in a sorted array
 *	using the interpolation search algorithm
 *@array: Pointer to the first element of the array to search
 *@size: Number of elements in the array
 *@value: The number(value) to search for
 *
 * Return: first index of value or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
