#include "main.h"

/**
  *clear_bit - Function that set the value of bit to 0
  *@n: pointer to the value to be set
  *@index: Position of the bit to be manipulated
  *
  *Return: 1 on success and -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
