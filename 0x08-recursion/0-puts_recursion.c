#include "main.h"

/**
  *_puts_recursion - This function prints a new line
  *@s: a pointer to the string to be printed
  *
  *Return: nothing
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
