#include "main.h"

/**
  *string_toupper - changes all lowercase letters of a string to uppercase
  *@s: - This is a pointer to input the char
  *
  *Return: char s
  */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
