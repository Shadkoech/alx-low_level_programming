#include "main.h"
/**
  *_islower - identifies lower case characters
  *@c: lowecase character identified
  *Return: 1 if character identifed is lowercase, otherwise 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

