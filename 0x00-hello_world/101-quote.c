#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point, prints a given statement
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
