#include "main.h"

/**
  *_pow_recursion - funtion returning x raised to power y
  *@x: the base number
  *@y: the power of x
  *
  *Return: result of the exponential
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
