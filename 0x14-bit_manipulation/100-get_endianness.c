#include "main.h"

/**
  *get_endianness - function that checks the endiannes
  *
  *Return: 0 if big Endian, 1 if little Endian
  */
int get_endianness(void)
{
	uint16_t x = 0x0001;
	uint8_t *ptr = (uint8_t *)&x;

	return ((ptr[0] == 0x01) ? 1 : 0);
}


