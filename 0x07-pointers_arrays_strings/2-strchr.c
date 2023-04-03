#include "main.h"

/**
  *_strchr - Locates a character in a given string
  *@s: The string to be checked
  *@c: The character to be located
  *
  *Return: Always 0
  */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return (0);
}
