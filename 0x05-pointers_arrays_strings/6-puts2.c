#include "main.h"

/**
  *puts2 - prints all characters of a string, starting with the first character
  *@str: the string from where printing is done
  *
  *Return: characters of a string
  */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
