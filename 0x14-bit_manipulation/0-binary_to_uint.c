#include "main.h"

/**
  *binary_to_uint - function that converts binary No to unsigned integer
  *@b: a pointer to the binary number
  *
  *Return: converted unsigned integer or 0 on failure
  */

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int convnumber = 0;

	if (b == NULL)
		return (0);

	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);

		convnumber <<= 1;
		if (b[counter] == '1')
			convnumber |= 1;
	}

	return (convnumber);
}
