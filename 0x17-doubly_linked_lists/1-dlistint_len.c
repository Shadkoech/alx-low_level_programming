#include "lists.h"

/**
 *dlistint_len - Function returning the numbe of elements in a L.L
 *@h: head-pointer to the list
 *
 *Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t element_num = 0;

	temp = h;

	while (temp != NULL)
	{
		element_num++;
		temp = temp->next;
	}

	return (element_num);
}
