#include "main.h"

/**
  *clear_bit - sets the value of a bit to 0
  *@n: a pointer to the UL int to search the bit
  *@index: the position of the bit to manipulate
  *
  *Return: 1 on success and -1 on error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
