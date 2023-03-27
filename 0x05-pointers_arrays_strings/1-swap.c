#include "main.h"

/**
  *swap_int - swaps the values of two integers
  *
  *@a: first integer
  *@b: second integer to swap with
  *
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
