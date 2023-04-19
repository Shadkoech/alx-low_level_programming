#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
  *print_name - A function that prints a name
  *@name: a pointer to the name to be printed
  *@f: a function pointer with nothing to return
  *
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
