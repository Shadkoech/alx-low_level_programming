#include "lists.h"

/**
  *free_listint - a function that frees the list
  *@head: a pointer to the list to be freed
  *
  *Return: void/nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
