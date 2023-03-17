#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This program prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lcase, e, q;

	e = 'e';
	q = 'q';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != e && lcase != q)
			putchar(lcase);
	}
	putchar('\n');
	return (0);
}
