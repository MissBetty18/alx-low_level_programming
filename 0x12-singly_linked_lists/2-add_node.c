#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 *
 * @head: first node of a linked list
 * @str: function parameter
 *
 * Return: NULL if new node failes to be added and
 * the new node if successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = len;
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = (*head);

	(*head) = newNode;
	return (newNode);
}
