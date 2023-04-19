#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  *get_op_func - selects the appropriate funtion to be applied by user
  *@s: a pointer to a group of symbols
  *
  *Return: Always 0
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}

	};
	int x = 0;

	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;

	return (ops[x].f);
}
