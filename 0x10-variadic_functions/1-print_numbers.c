#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - A function that prints numbers
  *@separator: the space (string) between numbers
  *@n: the number of integers passed
  *
  *Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;


	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
