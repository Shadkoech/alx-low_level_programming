#include "main.h"

/**
  *get_endianness - function that checks the endianness.
  *
  *Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	uint16_t x = 0x0001;
	uint8_t *ptr = (uint8_t *)&x;

	return ((ptr[0] == 0x01) ? 1 : 0);
}
