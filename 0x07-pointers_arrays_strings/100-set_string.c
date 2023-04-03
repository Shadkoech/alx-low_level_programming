#include "main.h"

/**
  *set_string - A function that sets the value of a pointer to a char
  *@s: The value to be modified
  *@to: the value to assign
  *
  *Return: Always zero
  */
void set_string(char **s, char *to)
{
	*s = to;
}
