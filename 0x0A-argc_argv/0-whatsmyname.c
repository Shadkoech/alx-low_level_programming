#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *main - An argument that prints its name
  *@argc: Number of elements entered into command line
  *@argv: an array of values entered by the command line
  *
  *Return: Always 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
