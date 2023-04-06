#include "main.h"

/**
  *wildcmp - This function compares two strings
  *@s1: a pointer to the first character string
  *@s2: another pointer to the seconf string
  *
  *Return: 1 if the strings are identical and 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s2 + 1, s1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s2 + 1, s1));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

