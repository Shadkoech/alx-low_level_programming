#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  *_memset - a function that feeds a memory address
  *@s: a pointer to the mem
  *@b: input characters
  *@n: number of bytes to be copied
  *
  *Return: Always 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

/**
  *_calloc - allocates memory for an array
  *@nmemb: array size
  *@size: size of element
  *
  *Return: pointer to new array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

/**
  *_mul - function that multiplies two numbers
  *@s1: the first string
  *@s2: the second string
  *
  *
  */
void _mul(char *s1, char *s2)
{
	int a, b, c, mul, dgit1, dgit2, tmp, resul = 0;
	char *p;
	void *temp;

	b = _length(s1);
	c = _length(s2);
	temp = c;
	mul = c + b;
	p = _calloc(sizeof(int), mul);

	temp = p;
	for (b--; b >= 0; b--)
	{
		dgit1 = s1[b] - '0';
		resul = 0;
		c = tmp;
		for (c--; c >= 0; c--)
		{
			dgit2 = s2[c] - '0';
			resul = resul + p[b + c + 1] + (dgit2 * dgit1);
			p[b + c + 1] = resul % 10;
			resul /= 10;
		}
		if (resul)
			p[b + c + 1] = resul % 10;
	}

	while (p == 0)
	{
		p++;
		mul--;
	}

	for (a = 0; a < mul; a++)
		printf("%i\n", p[a]);
	free(temp);
}

/**
  *main - function multiplying two No
  *@argc: number of arguments entered
  *@argv: arguments in array
  *
  *Return: 98 on failure otherwise 0 (success)
  */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || check_number(num1) || check_number(num2))
		error_exit();

	if (*num1 == '0' || *num2 == '0')
	{
		printf("0\n");
	}
	else
		_mul(num1, num2);
	return (0);
}
