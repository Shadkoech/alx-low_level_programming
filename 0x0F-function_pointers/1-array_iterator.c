#include "function_pointers.h"


/**
  *array_iterator - function that executes a certain function given
  *as a parameter on every element
  *@array: A pointer to arrays of integers
  *@size: array size
  *@action: a pointer to a function that takes integer parameter
  *
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	x = 0;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
