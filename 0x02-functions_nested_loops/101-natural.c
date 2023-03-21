#include <stdio.h>

/**
  *main - Prints all the natural numbers below 1024
  *Return: Always 0 (success)
  */
int main(void)
{
	int 1;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

