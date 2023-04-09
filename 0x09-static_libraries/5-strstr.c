#include "main.h"

/**
  *_strstr - A function that identifies the occurrence of a substring
  *@haystack: The string to be checked
  *@needle: The substring to be found
  *
  *Return: a pointer to the beginning of located substring or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	char *m, *n;

	while (*haystack != '\0')
	{
		m = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (m);
		haystack++;
	}
	return (0);
}
