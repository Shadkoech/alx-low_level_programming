#include "main.h"

/**
  *_puts - This function prints a string in reverse
  *@str: the string to be printed
  *
  *Return: nothing
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
