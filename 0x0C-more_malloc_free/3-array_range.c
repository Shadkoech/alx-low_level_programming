#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates an array of integers
  *@min: Lower range of values
  *@max: higher range of values
  *
  *Return: A pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int a, size;
	int *p;


	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		p[a] = min;
		min++;
	}

	return (p);
}
