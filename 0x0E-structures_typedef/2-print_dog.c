#include "dog.h"
#include <stdio.h>

/**
  *print_dog - prints a struct dog
  *@d: a pointer to struct dog that is to be printed
  *
  *Return: Always 0
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL && d->owner == NULL)
		d->name = d->owner = "(nil)";

	printf("Name: /%s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
