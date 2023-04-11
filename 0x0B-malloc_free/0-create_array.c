#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of characters and initializes it
  *@size: size of an array to be created
  *@c: character to initialize the array to
  *
  *Return: pointer to array other NULL if fail
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}
	return (p);
}
