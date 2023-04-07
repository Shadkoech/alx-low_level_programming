#include "main.h"

/**
  *_strlen_recursion - This function gives length of a string
  *@s: a pointer to the target string
  *
  *Return: string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}


/**
  *palidromechecker - Goes through the character string for paldrome
  *@s: a pointer to the target string
  *@x: iterating index
  *@len: string length
  *
  *Return: 1 if palidrome and 0 otherwise
  */
int palidromechecker(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (palidromechecker(s, x + 1, len - 1));
}


/**
  *is_palidrome - checks to see if the string is palidrome
  *@s: a pointer to the target string
  *
  *Return: string length
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palidromechecker(s, 0, _strlen_recursion(s)));
}
