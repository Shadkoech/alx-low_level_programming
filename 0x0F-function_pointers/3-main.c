#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
  *main -  A program that prints the outcome of arithmentic operation
  *@argc: total arguments supplied to the program
  *@argv: array of pointers of the supplied arguments
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	p = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*p == 47 && num2 == 0) || (*p == 37 && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(p)(num1, num2));
	return (0);
}
