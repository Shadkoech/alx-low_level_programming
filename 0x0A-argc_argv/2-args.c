#include "main.h"
#include <stdio.h>

/**
  *main - prints all the arguments it recieves
  *@argc: Number of arguments passed
  *@argv: Array holding the arguments passed
  *
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
