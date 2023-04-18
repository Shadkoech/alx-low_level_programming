#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *new_dog - function that creates a new dog
  *@name: a pointer to the name of the dog
  *@age: the age of the dog
  *@owner: a pointer to the string that has owner of the dog
  *
  *Return: Always 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x;
	int yn = 0;
	int yo = 0;
	dog_t *p;

	if ((name == NULL) || (owner == NULL))
		return (NULL);

	p = malloc(sizeof(*p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (name[yn] != '\0')
	{
		yn++;
	}
	while (owner[yo] != '\0')
	{
		yo++;
	}
	p->name = malloc(yn + 1);
	p->owner = malloc(yo + 1);
	if ((p->name == NULL) || (p->owner == NULL))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (x = 0; x < yn; x++)
		p->name[x] = name[x];
	p->name[yn] = '\0';
	p->age = age;
	for (x = 0; x < yo; x++)
		p->owner[x] = owner[x];
	p->owner[yo] = '\0';
	return (p);
}
