#include "main.h"

/**
  *_strncat - Concatenates two strings
  *@dest: The destination string
  *@src: The string to be joined
  *@n: number of bytes from src to be appended to dest
  *
  *Return: a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b <= n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
