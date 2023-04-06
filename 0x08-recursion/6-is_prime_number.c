#include "main.h"

/**
  *PrimeNo - A generated function to help check if number is prime
  *@n: The number to be checked
  *@a: the index iterator for the number
  *
  *Return: 1 if number is prime, 0 otherwise
  */
int PrimeNo(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0)
		return (0);
	return (PrimeNo(n, a - 1));
}

/**
  *is_prime_number - This function returns 1 in the case integer is prime
  *@n: The number to be injected
  *
  *Return: 1 if prime and 0 otherwise
  */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (PrimeNo(n, n - 1));
}
