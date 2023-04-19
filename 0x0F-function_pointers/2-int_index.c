#include "function_pointers.h"

/**
  *int_index - a function that searches for an integer
  *@array: a pointer to the array of integers
  *@size: size of the array
  *@cmp: a pointer to a working function
  *
  *Return: always 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
