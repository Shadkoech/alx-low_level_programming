#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - a function that will print a string and a newline
  *@separator: the space to be printed between strings
  *@n: the number of strings to be passed
  *
  *Return: nothing, void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int x;

	va_start(string, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && x != (n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(string);
}
