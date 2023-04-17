#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - A function that initializes a variable of type dog
  *@d: a pointer to struct dog
  *@name: the dog's name
  *@age: The dog's age
  *@owner: Dog's owner
  *
  *Return: Always 0
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
