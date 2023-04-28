#include "lists.h"

/**
 * list_len - prints all elements of list_t
 *
 * @h: linked list
 *
 * Return: count if linked list isn't NULL
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
