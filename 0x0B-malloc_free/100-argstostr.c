#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *argstostr - The function cocantenates all arguments
  *@ac: argument counter
  *@av: argument vector
  *
  *Return: A pointer to a new string, NULL on failure
  */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			len++;
			b++;
		}

		b = 0;
		a++;
	}
	p = malloc((sizeof(char) * len) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			p[c] = av[a][b];
			c++;
			b++;
		}

		p[c] = '\n';

		b = 0;
		c++;
		a++;
	}

	p[c] = '\0';
	c++;

	return (p);

}
