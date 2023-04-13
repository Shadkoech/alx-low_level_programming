#include "main.h"
#include <stdlib.h>

/**
  *_realloc - Reallocates a memory block
  *@old_size: size of the allocated space
  *@new_size: size of new memory block
  *@ptr: pointer of the previous allocated memory
  *
  *Return: pointer to the new allocated mem
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		p[a] = ((char *) ptr)[a];
	}

	free(ptr);
	return (p);
}
