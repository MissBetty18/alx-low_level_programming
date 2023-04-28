#include "lists.h"
/**
 * free_list - function that frees a linked list
 *
 * @head: first node of a linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		if (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
