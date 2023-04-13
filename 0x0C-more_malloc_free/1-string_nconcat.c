#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *string_nconcat - The function that concatenates two string
  *@s1: The first string to concatenate
  *@s2: The second string to concatenate
  *@n: The number of bytes of string 2 to concatenate
  *
  *Return: pointer to the concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	/*ensuring that n is the length of s2 */

	if (n >= b)
		n = b;

	p = malloc(sizeof(char) * (a + n + 1));
	if (p == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		p[c] = s1[c];

	for (d = 0; d < n && s2[d] != '\0'; d++)
	{
		p[c] = s2[d];
		c++;
	}

	p[c] = '\0';
	return (p);
}
