#include "main.h"

/**
  *_strlen - returns the length of a given string
  *@s: string to be returned
  *
  *Return: length of string
  */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
