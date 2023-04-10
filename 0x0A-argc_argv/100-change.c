#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - Prints the minimum number of coins to make change
  *@argc: - the number of elements entered to program
  *@argv: - Array holding the elements
  *
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		if (cents >= 10)
			cents = cents - 10;
		if (cents >= 5)
			cents = cents - 5;
		if (cents >= 5)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;

		coins = coins + 1;
	}
	printf("%d\n", coins);
	return (0);
}

