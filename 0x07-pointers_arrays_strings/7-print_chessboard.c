#include "main.h"

/**
  *print_chessboard - function prints a chessboard
  *@a:array
  *
  *Return: Always 0
  */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; c++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
