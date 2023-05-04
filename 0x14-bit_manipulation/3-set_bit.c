#include "main.h"

/**
  *set_bit - a function that sets the value of a bit to 1
  *@n: a pointer to a value to be manipulated
  *@index: the position of the bit to handle
  *
  *Return: 1 on success and -1 on error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}

