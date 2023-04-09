#include "main.h"

/**
  *_memcpy - This function copies a memory area
  *@dest: The memory area to copy n-bytes to
  *@src: The memory area to copy from
  *@n: number of bytes to be copied
  *
  *Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
