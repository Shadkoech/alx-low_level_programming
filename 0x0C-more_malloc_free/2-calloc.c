#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_calloc - function that allocates memory for an array
  *@nmemb: elements in an array
  *@size: size of the array
  *
  *Return: NULL if size of nmemb is 0, otherwise NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a, b;
	char *p;

	a = b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	p = malloc(b);

	if (p == NULL)
		return (NULL);

	while (a < b)
	{
		p[a] = 0;
		a++;
	}
	return (p);
}
