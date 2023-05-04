#include "main.h"

/**
  *get_bit - Function that returns the value of a bit at a given index
  *@n: the unsigned lng int to search the bit
  *@index: the index to return a value at
  *
  *Return: The value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	bitval = (n >> index) & 1;
	return (bitval);
}
