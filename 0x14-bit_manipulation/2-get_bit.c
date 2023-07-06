#include "main.h"

/**
  *get_bit - A function giving the value of a bit at index
  *@n: The unsigned long integer to search
  *@index: Position of the bit within the number n
  *
  *Return: Value of bit at index, -1 on failure
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index >  63)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
