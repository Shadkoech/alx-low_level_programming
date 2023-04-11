#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory
  *@str: a pointer to the string to be duplicated
  *
  *Return: NULL is str is NULL and a pointer to the string on success
  */
char *_strdup(char *str)
{
	char *p;
	int a;
	int b;

	a = 0;
	b = 0;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	p = malloc(sizeof(char) * (a + 1));

	if (p == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
	{
		p[b] = str[b];
	}
	return (p);
}
