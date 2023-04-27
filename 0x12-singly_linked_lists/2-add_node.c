#include "lists.h"

/**
  *add_node - a function that adds a new node
  *@head: pointer to the first node of the list
  *@str: - string to be added as a node
  *
  *Return: starting address to the new list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
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
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
