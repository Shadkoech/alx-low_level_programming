#include "main.h"
#include <stdlib.h>

/**
  *str_concat - Links two given strings
  *@s1: pointer to the first string
  *@s2: pointer to the second string to link to string 1
  *
  *Return: pointer to linked string otherwise NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *link;
	int a;
	int b;

	a = b = 0;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	link = malloc(sizeof(char) * (a + b + 1));

	if (link == NULL)
		return (NULL);

	a = b = 0;
	while (s1[a] != '\0')
	{
		link[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		link[b] = s2[b];
		a++, b++;
	}

	link[a] = '\0';
	return (link);
}
