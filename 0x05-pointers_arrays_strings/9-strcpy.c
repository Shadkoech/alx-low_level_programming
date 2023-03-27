#include "main.h"

/**
  *_strcpy - copies a string pointed by src to buffer pointed by dest
  *@src: string to copy from
  *@dest: buffer to copy to
  *
  *Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
