#include "main.h"

/**
  *_isupper - Checks for uppercase letters
  *@c: character to be checked
  *
  *Return: 1 if uppercase, else 0
  */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
