#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_all - A function that prints pretty much everything
  *@format: a list of types of arguments passed
  *
  *Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int x = 0;
	char *strn, *space = "";

	va_start(ap, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", space, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(ap, double));
					break;
				case 's':
					strn = va_arg(ap, char*);
					if (strn == NULL)
						strn = ("(nil)");
					printf("%s%s", space, strn);
					break;
				default:
					x++;
					continue;
			}
			space = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(ap);
}
