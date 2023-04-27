#include "lists.h"

/**
  *free_list - A function that frees a list
  *@head: pointer to first node
  *
  *Return: nothing, void
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
