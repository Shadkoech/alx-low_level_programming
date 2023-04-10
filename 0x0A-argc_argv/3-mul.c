#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - multiplies two numbers
  *@argc: the number of arguments entered
  *@argv: Array of the holding the entered arguments
  *
  *Return: 1 if an error occurs otherwise 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

