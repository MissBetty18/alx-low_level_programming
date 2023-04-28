#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: first node of a linked list
 * @str: string
 *
 * Return: NULL if it fails to add new node and
 * new node if successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node_end = malloc(sizeof(list_t));
	
	while (str[len])
		len++;

	if (!new_node_end)
        {
		free(new_node_end);
                return (NULL);
        }
	new_node_end->str = strdup(str);
	new_node_end->len = len;
	
	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}
	if (!new_node_end->str)
	{
		free(new_node_end);
		return (NULL);
	}
	new_node_end->next = (*head);
	(*head) = new_node_end;
	return (new_node_end);
}
