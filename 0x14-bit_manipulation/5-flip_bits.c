#include "main.h"

/**
  *flip_bits - returns the number of bits to be flipped
  *@n: The first unsigned long integer
  *@m: the second unsigned long integer
  *
  *Return: The number of bits to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int bits2flip = n ^ m;

	while (bits2flip != 0)
	{
		count += bits2flip & 1;
		bits2flip >>= 1;
	}

	return (count);
}
