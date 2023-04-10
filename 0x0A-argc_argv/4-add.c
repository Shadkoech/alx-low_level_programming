#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - Adds positive numbers
  *@argc: Number of elements entered
  *@argv: array holding the entered elements
  *
  *Return: 1 if an error, 0 otherwise
  */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum = 0;

	if (argc > 1)
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			sum = sum + atoi(argv[a]);
		}
	printf("%i\n", sum);
	return (0);
}

