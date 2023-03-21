#include <stdio.h>

/**
  *main - Prints all the natural numbers below 1024
  *Return: Always 0 (success)
  */
int main(void)
{
	int i, z;

	z = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			z += i;
	}
	printf("%d\n", z);
	return (0);
}

