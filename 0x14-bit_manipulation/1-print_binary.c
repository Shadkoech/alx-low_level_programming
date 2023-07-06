#include "main.h"

/**
  *print_binary - This function gives the binary form of a number
  *@n: The number to be converted to binary
  *
  *Return: nothing
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}

