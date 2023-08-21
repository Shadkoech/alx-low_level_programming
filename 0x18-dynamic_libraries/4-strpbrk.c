#include "main.h"

/**
  *_strpbrk - Searches a string for a set of bytes
  *@s:A pointer to the source string
  *@accept:A pointer to the accepted string
  *
  *Return: Always 0
  */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return (0);
}

