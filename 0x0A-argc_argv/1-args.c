#include "main.h"
#include <stdio.h>

/**
  *main - prints the number of arguments passed to it
  *@argc: number of arguments passed to a program
  *@argv: array holding the entered arguments
  *
  *Return: always 0
  */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
