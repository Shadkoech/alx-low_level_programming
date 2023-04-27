#include <stdio.h>

void presume_main(void) __attribute__ ((constructor));

/**
  *presume_main - prints before main
  *
  *Returns: nothing
  */

void presume_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
