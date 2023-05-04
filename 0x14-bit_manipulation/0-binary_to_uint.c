#include "main.h"

/**
  *binary_to_uint - Converts a binary number to an unsigned integer
  *@b: a pointer to the string to manipulate
  *
  *Return: converted number or 0 on failure
  */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decnumber = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		decnumber <<= 1;
		if (b[x] == '1')
			decnumber |= 1;
	}

	return (decnumber);
}

