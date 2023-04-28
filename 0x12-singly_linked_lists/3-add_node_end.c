#include "lists.h"

/**
  *add_node_end - funtion that adds a new node at the end
  *@head: pointer to the last node on the list
  *@str: the string to be used as input on added node
  *
  *Return: the address to the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;
	return (newnode);
}
