#include "main.h"

/**
  *flip_bits - gives number of bits to be flipped to give a certain number
  *@n: first UL integer
  *@m: seconf UL integer
  *
  *Return: Number of bits to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int bits2flip = n ^ m;

	count = 0;

	while (bits2flip != 0)
	{
		count += bits2flip & 1;
		bits2flip >>= 1;
	}

	return (count);
}
