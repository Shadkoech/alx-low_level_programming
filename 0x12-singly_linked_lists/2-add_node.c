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
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
