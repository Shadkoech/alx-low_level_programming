#include "lists.h"

/**
  *free_listint_safe - This is a function that frees a list listin_t
  *@h: a pointer to the head of the Link list
  *
  *Return: the number of elements of freed list
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodecount;
	int dff;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != 0)
	{
		dff = *h - (*h)->next;
		if (dff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodecount++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodecount++;
			break;
		}
	}

	*h = NULL;

	return (nodecount);
}
