#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add - a functions that add two integers
  *@a: the first integer
  *@b:  the second integer value
  *
  *Return: the sum of integer a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - a functions that subtracts two integers
  *@a: the first integer
  *@b: the second integer value
  *
  *Return: the subtraction of integer a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - a functions that multiplies two integers
  *@a: the first integer
  *@b: the second integer value
  *
  *Return: the multiplication of integer a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
  *op_div - a functions that divides two integers
  *@a: the first integer
  *@b: the second integer value
  *
  *Return: the division of integer a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - a functions that subtracts two integers
  *@a: the first integer
  *@b: the second integer value
  *
  *Return: the remaining value after division of integer a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
