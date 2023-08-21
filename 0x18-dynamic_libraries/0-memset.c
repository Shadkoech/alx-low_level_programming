#include "main.h"

/**
  *_memset - Fills the memory with a constant byte
  *@n: The number of bytes to be filled
  *@s: The memory area pointed to
  *@b: constant byte
  *
  *Return: Always 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	for (; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

