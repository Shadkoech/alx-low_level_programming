#include <stdio.h>
#include <stdlib.h>

/**
  *main - a function that prints opcodes of its own main function
  *@argc: total number of input arguments
  *@argv: array of total arguments
  *
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int x, Nubytes;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	Nubytes = atoi(argv[1]);

	if (Nubytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (unsigned char *) main;

	for (x = 0; x < Nubytes; x++)
	{
		if (x == Nubytes - 1)
		{
		printf("%02hhx\n", p[x]);
		break;
		}
		printf("%02hhx ", p[x]);
	}
	return (0);
}
