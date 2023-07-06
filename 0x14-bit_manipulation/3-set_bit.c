#include "main.h"

/**
  *set_bit - A function setting the value of bit to 1
  *@n: pointer to the value to be set
  *@index: indexing position of the bit to be manipulated
  *
  *Return: 1 on success, -1 on failure
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}

