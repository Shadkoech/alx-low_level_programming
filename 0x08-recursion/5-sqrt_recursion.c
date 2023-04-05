#include "main.h"

int squareroot(int n, int a);

/**
  *_sqrt_recursion - This function returns the natural squareroot of a number
  *@n: The number to get its root
  *
  *Return: the end result of the squareroot
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (squareroot(n, 0));
}

/**
  *squareroot - recurses until it finds the natural squareroot of a number
  *@n: the number to get it's root
  *@a: the iterating index
  *
  *Return: The end result of the squareroot
  */
int squareroot(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (1);
	return (squareroot(n, a + 1));
}
