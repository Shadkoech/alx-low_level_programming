#include "main.h"

int prime_number(int n, int a)

/**
  *is_prime_number - Checks if an input number is a prime
  *@n: the number to iterate
  *
  *Return: return 1 if it is a prime number; 0 if it not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
  *prime_number - finds prime number recursively
  *@n: the number to iterate
  *@a: index to recur
  *
  *Return: if number is prime return 1, if not 0
  */
int prime_number(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	else if (n % a == 0 && a > 0)
	{
		return (0);
	}
	else
		return (prime_number(n, a - 1));
}
