#include "main.h"

/**
  *_strspn - Gets the length of a prefix substring
  *@s: source string to pull the segment from
  *@accept: A pointer to the accepted string
  *
  *Return: Always 0
  */
unsigned int _strspn(char *s, char *accept)
{
	int l, m;
	unsigned int n = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] != 32)
		{

			for (m = 0; accept[m] != '\0'; m++)
			{
				if (s[l] == accept[m])
					n++;
			}
	}
	else
		return (n);
	}
	return (n);
}
