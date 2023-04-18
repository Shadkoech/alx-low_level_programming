#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - This is a program that free a dog
  *@d: a pointer to the struct dog_t
  *
  *Return: Always 0
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
