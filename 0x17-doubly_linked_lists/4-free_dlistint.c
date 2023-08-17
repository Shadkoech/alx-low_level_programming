#include "lists.h"

/**
 *free_dlistint - A function that frees a list
 *@head: head-pointer to the list
 *
 *Return: freed list
 */
void free_dlistint(dlistint_t *head)
{
	/*declaring a substitutive pointer*/
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
